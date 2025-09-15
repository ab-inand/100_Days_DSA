//Find a Pair that Sums to a Target (Two-Pointers)

//Given a sorted array, we can use the two-pointer technique to find the pair in linear time.



#include <iostream>
#include <vector>
#include <utility> // For std::pair

// Function to find a pair with a given sum in a sorted array
std::pair<int, int> findSumPair(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == target) {
            // Found the pair
            return {arr[left], arr[right]};
        } else if (currentSum < target) {
            // Sum is too small, need a larger value, so move the left pointer forward
            left++;
        } else { // currentSum > target
            // Sum is too large, need a smaller value, so move the right pointer backward
            right--;
        }
    }

    // Return a pair indicating failure if no pair is found
    return {-1, -1};
}

int main() {
    std::vector<int> numbers = {2, 3, 4, 7, 8, 11, 15};
    int targetSum = 15;

    std::pair<int, int> result = findSumPair(numbers, targetSum);

    if (result.first != -1) {
        std::cout << "Pair found: (" << result.first << ", " << result.second << ")" << std::endl;
    } else {
        std::cout << "No pair found with the sum " << targetSum << "." << std::endl;
    }

    return 0;
}
