#include <iostream>
using namespace std;
#include <string>


int main() {

    char choice;
    string text = "Help on:\n1. if\n2. switch\nChoose one: \n";

    cout << text;
    cin >> choice;

    switch(choice) {
        case '1': cout << "The if:\n\n";
                  cout << "if helper";
        case '2': cout << "The switch:\n\n";
                  cout << "switch helper";
        }
    return 0;
}