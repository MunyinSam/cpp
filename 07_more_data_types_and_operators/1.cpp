#include <iostream>
using namespace std;

int myNegate(const int *val);

int main() {
    int result;
    int v = 10;
    volatile int x = 100;

    result = myNegate(&v);
    cout << v << " negated is " << result;
    cout << '\n' << v;

    return 0;
}

int myNegate(const int *val) {

}