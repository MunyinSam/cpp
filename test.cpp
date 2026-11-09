#include <iostream>
#include <bitset>
using namespace std;

int main() {

    double *x;
    double a = 10;
    x = &a;

    int *y;
    y = (int *) &a;

    cout << bitset<8>(a) << ' ' << &a << endl;

    cout << x << ' ' << bitset<8>(*x) << endl;
    cout << y << ' ' << bitset<32>(*y) << endl;
    cout << sizeof(int) << ' ' << sizeof(double);

    return 0;
}