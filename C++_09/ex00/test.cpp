#include <iostream>
#include <string>

int main() {
    std::string text = "Hello World!    "; // 4 trailing spaces

    // Find the last character that is NOT a space
    size_t last_non_space = text.find_last_not_of(" ");

    if (last_non_space != std::string::npos) {
        // Erase everything after the last non-space character
        text.erase(last_non_space);
        std::cout << "Trimmed text: '" << text << "'\n";
    } else {
        std::cout << "The string is empty or contains only spaces.\n";
    }

    return 0;
}
