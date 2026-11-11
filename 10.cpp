#include <iostream>
using namespace std;

void sqr_it(int *i);

int main() {
    int x;

    x = 10;
    sqr_it(&x);

    cout << x;

    return 0;
}
void sqr_it(int *i) {
    *i = *i * *i;
}
