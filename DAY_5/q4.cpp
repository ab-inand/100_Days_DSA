//Binary Search 2 (Medium): Find First Occurrence

//When you find a match, you don't stop. You store it as a potential answer and keep searching in the left half to see if an earlier one exists.


#include <iostream>
#include <vector>

int findFirstOccurrence(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;      // Found a potential answer
            high = mid - 1;    // But keep searching in the left half for an earlier one
        } else if (target < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    std::vector<int> numbers = {2, 5, 5, 5, 8, 12, 12, 16};
    int target = 5;
    int result = findFirstOccurrence(numbers, target);

    if (result != -1) {
        std::cout << "First occurrence of " << target << " is at index: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found." << std::endl;
    }
    return 0;
}
