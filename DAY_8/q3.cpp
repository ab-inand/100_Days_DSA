// Three Sum Problem

// Problem: Given a sorted array of integers and a target sum, write a function to determine if there exists a triplet (three elements) in the array that adds up to the target value. The function should return true if a triplet is found, and false otherwise.

// Hint: Use a loop to fix one element, then use the two-pointer technique on the rest of the array to find the other two.




#include <iostream>
#include <vector>

using namespace std;

// Function to find if a triplet with a given sum exists
bool findThreeSum(const vector<int>& arr, int target) {
    int n = arr.size();
    if (n < 3) {
        return false; // Not enough elements for a triplet
    }

    // Fix the first element and find the other two
    for (int i = 0; i < n - 2; ++i) {
        // Use the two-pointer technique for the rest of the array
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];

            if (currentSum == target) {
                // Found the triplet
                cout << "Triplet found: (" << arr[i] << ", " << arr[left] << ", " << arr[right] << ")" << endl;
                return true;
            } else if (currentSum < target) {
                // Sum is too small, need a larger value
                left++;
            } else { // currentSum > target
                // Sum is too large, need a smaller value
                right--;
            }
        }
    }

    // No triplet was found
    return false;
}

int main() {
    vector<int> numbers = {1, 2, 4, 5, 8, 12};
    int targetSum = 17; // 4 + 5 + 8 = 17

    cout << "Searching for a triplet that sums to " << targetSum << "..." << endl;

    if (!findThreeSum(numbers, targetSum)) {
        cout << "No such triplet found." << endl;
    }
    
    return 0;
}
