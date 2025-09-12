//## Binary Search 1 (Easy): Standard Implementation


#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (target < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> numbers = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    int result = binarySearch(numbers, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found." << std::endl;
    }
    return 0;
}
