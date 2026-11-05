#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int magic;
    int guess;

    magic = rand();

    // cout << sizeof(magic);

    cout << "Enter your guess: ";
    cin >> guess;

    if (guess == magic) cout << "Right";
    else cout << "Wrong";


    return 0;
}