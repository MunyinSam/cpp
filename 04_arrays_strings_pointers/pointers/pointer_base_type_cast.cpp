#include <iostream>

using namespace std;

int main() {
    double x,y;
    int *p;

    x = 123.23;
    int a = 10;
    cout << sizeof(x) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    p = (int *) &x; // use cast to assign double * to int *
    cout << sizeof(p) << endl;
    cout << sizeof(&x) << endl;

    cout << sizeof(&a) << endl;

    y = *p;
    cout << y;

    return 0;
}