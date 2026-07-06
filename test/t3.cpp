#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    // Declaring and using an iterator to loop through the vector
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " "; // Output: 10 20 30 40 
    }
    std::cout <<"ff :" <<numbers[numbers.size() / 2] << std::endl;
    // Modern C++ alternative using 'auto' for cleaner syntax
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it += 5; // Modifying elements directly via the iterator
    }
}
