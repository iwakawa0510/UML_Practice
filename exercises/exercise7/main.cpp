#include <array>
#include <iostream>

void printArray() {
    std::array<int, 5> numbers = {1, 2, 3, 4, 5};
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
}
