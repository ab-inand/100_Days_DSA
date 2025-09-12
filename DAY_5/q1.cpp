//Linear Search 1 (Easy): Find Element

#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Return the index where the element was found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    std::vector<int> numbers = {2, 45, 12, 8, 23, 19};
    int target = 12;
    int result = linearSearch(numbers, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }
    return 0;
}
