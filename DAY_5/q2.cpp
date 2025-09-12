//Linear Search 2 (Medium): Find All Occurrences


#include <iostream>
#include <vector>

std::vector<int> findAllOccurrences(const std::vector<int>& arr, int target) {
    std::vector<int> indices;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    std::vector<int> numbers = {5, 2, 8, 5, 1, 5, 9};
    int target = 5;
    std::vector<int> results = findAllOccurrences(numbers, target);

    if (!results.empty()) {
        std::cout << "Element " << target << " found at indices: ";
        for (int index : results) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Element " << target << " not found." << std::endl;
    }
    return 0;
}
