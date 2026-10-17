#include <iostream>

using namespace std;

int main() {
    short int i; // a signed short integer
    short unsigned int j; // an unsigned short int

    j = 60000;
    i = j;

    cout << i << " " << j << endl;

    char ch;
    ch = 'X';

    cout << "This is ch: " << ch << endl;

    return 0;
}