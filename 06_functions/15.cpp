#include <iostream>
using namespace std;

void f(int &i); // reference parameter

int main() {
    int val = 1;
    cout << "Old value for val: " << val << endl;
    f(val);
    cout << "New value for val: " << val << endl;
    return 0;
}

void f(int &i) {
    i = 10;
}