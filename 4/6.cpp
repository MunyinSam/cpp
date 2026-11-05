#include <iostream>
using namespace std;

int main() {
    char str[80];

    // cout << "Enter a string: ";
    // cin >> str; // this is a test
    // cout << "Here is your string: ";
    // cout << str; // this (it does not print all)


    cout << "Enter a string: ";
    gets(str);
    cout << "Here is your string: ";
    cout << str;
    return 0;
}