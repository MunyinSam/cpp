#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    std::string text = "  C++   is   awesome!  ";
    std::stringstream ss(text);
    std::string word;
    std::vector<std::string> words;

    // The >> operator automatically extracts space-separated tokens
    while (ss >> word) {
        words.push_back(word);
    }

    // Output results
    for (const auto& w : words) {
        std::cout << "[" << w << "]\n";
    }
}