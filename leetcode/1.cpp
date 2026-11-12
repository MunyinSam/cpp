#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>

// int main() {
//     std::string text = "Hello, World!";
    
//     // Both methods return the exact same value
//     std::size_t len1 = text.length();
//     std::size_t len2 = text.size();
    
//     std::cout << "Length using .length(): " << len1 << std::endl; // Outputs 13
//     std::cout << "Length using .size():   " << len2 << std::endl; // Outputs 13
    
//     return 0;
// }
int main() {
    int i;
    std::string input = "this is a text";
    // output -> "text a is this";

    // split word by space -> push back into arr
    // cout backward or combine string
    std::stringstream ss(input);
    std::string word;
    std::vector<std::string> words;
    
    while(ss >> word) {
        words.push_back(word);
    }

    std::size_t length = words.size();
    std::string output = "";
    for(i=length;i>=0;i--) {
        // std::cout << words[i] << ' ';
        if(i == length) {
            output = words[i];
        } else {
            output = output + " " + words[i];
        }
    }

    std::cout << output;

    return 0;
}
