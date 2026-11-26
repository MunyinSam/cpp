#include <iostream>
using namespace std;

void f(int i);
void f(int i, int j);
void f(double k);

int main() {

    f(10);
    f(10, 20);
    f(12.23);

    return 0;
}

void f(int i) {
    cout << "In f(int), i is " << i << "\n";
}

void f(int i, int j) {
    cout << "In f(int, int)";
}

void f(double k) {
    cout << "In double";
}