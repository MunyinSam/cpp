#include <iostream>
using namespace std;

int main() {
    
    int num;

    cout << "Enter a number from 1 to 3: ";
    cin >> num;

    switch(num) {
        case 1:
            cout << "A rolling stone gathers no moss,\n";
            break;
        case 2:
            cout << "A bird in hand is worth two in the bush. \n";
            break;
        case 3:
            cout << "dasdasdasdsad \n";
            break;
        default:
            cout << "Nothing";
    }

    return 0;
}