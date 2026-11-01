#include <iostream>
#include <cstdlib>
#include <bitset>

int main() {
    int magic;
    int guess;
    
    srand(time(nullptr));
    magic = rand();

    std::cout << std::bitset<32>(magic);
    return 0;
}