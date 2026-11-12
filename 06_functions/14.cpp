#include <iostream>
using namespace std;

double reciprocal(double x);
void swap(int *x, int *y);

int main() {
    double t = 10.0;
    cout << "Reciprocal of 10.0 is " << reciprocal(t) << "\n";

    cout << "Value of t is still: " << t << "\n";

    int i, j;
    i = 10;
    j = 20;

    cout << "Initial values of i and j: ";
    cout << i << ' ' << j << endl;

    swap(&j, &i);

    cout << "Swapped values of i and j: ";
    cout << i << ' ' << j << endl;

    return 0;
}

double reciprocal(double x) {
    x = 1 / x;
    return x;
}

void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    cout << "Swapped: " << x << ' ' << y << endl;
}