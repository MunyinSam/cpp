#include <iostream>

using namespace std;

bool isEven(int num) {
    if(!(num % 2)) return true;
    // 1 returns true
    // 0 returns false
    return false;
}

int main() {

    if(isEven(4)) cout << "4 is even\n";
    if(isEven(3)) cout << "This will not display";
    return 0;
}