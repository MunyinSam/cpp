#include <iostream>
#include <cmath>
using namespace std;

// int f(char &c, int *i);
void myRound(double a);

int main() {
    char ch = 'x';
    int i = 10;
    // f(ch, &i);

    double a = 20.4;
    myRound(a);

    return 0;
}

// int f(char &c, int *i);
void myRound(double a) {
    cout << a << ' ' << endl;

    double* ptr = &a;
    modf(a, ptr);
    cout << a << ' ' << ptr;
}

