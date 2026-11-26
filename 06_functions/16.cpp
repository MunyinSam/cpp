#include <iostream>

using namespace std;

void swap(int &x, int &y);
int& minSwap(int &x, int &y);

int main() {
    int a = 30, b = 20;
    swap(a, b);
    cout << a << ' ' << b;

    cout << endl << minSwap(a, b);
    return 0;
}

void swap(int &x, int &y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int& minSwap(int &x, int &y) {
    int temp;

    temp = x;
    x = y;
    y = temp;

    return x > y ? y : x;
}