#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int magic;
    int guess;

    magic = rand();

    cout << "Enter your guess: ";
    cin >> guess;
    if (guess == magic) {
        cout << "Right ";
    }
    else {
        cout << "Sorry, you are wrong";
        if (guess > magic) cout << " Your guess is too high \n";
        else cout << " Your guess is too low \n";
    }
    cout << magic << " is the magic number";
    return 0;
}

