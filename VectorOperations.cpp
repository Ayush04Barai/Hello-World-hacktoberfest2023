#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Declaration and Initialization
    std::vector<int> numbers = {1, 2, 3};

    // Adding Elements
    numbers.push_back(4);
    numbers.insert(numbers.begin() + 1, 5);

    // Accessing Elements
    int value = numbers[0];

    // Size of Vector
    int size = numbers.size();

    // Iterating Through Elements
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Removing Elements
    numbers.pop_back();
    numbers.erase(numbers.begin() + 2);

    // Sorting Vector
    std::sort(numbers.begin(), numbers.end());

    // Searching in Vector
    auto it = std::find(numbers.begin(), numbers.end(), 3);
    if (it != numbers.end()) {
        std::cout << "Element found" << std::endl;
    }

    // Resizing Vector
    numbers.resize(10);

    // Clearing Vector
    numbers.clear();

    return 0;
}
