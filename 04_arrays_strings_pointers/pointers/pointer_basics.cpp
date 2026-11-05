#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int total;
    int *ptr;
    int val;

    total = 3200;
    ptr = &total; // get the address of total

    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    val = *ptr; // get the value of that address

    cout << "The total is " << total;

    return 0;
}