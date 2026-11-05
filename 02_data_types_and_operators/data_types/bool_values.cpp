#include <iostream>
using namespace std;

int main() {
    bool b;

    b = false;
    cout << "b is " << b << endl;

    b = true;
    cout << "b is " << b << endl;

    if(b) cout << "This is executed.\n";

    b = false;
    if(b) cout << "Not executed\n";

    cout << "10 > 9 is " << (10 > 9) << "\n"; 

    // b is 0
    // b is 1
    // This is executed.
    // 10 > 9 is 1
}