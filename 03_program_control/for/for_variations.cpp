#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int i;
    int count;
    int x, y;

    for(i=50; i>= -50;i=i-10) cout << i << ' ';

    for(count=10; count<5; count++) {
        cout << count;
    }

    for(x=0, y=10; x <= y; ++x, --y) {
        cout << x << ' ' << y << '\n';
    }

    x = 100;
    cout << sin(x) << cos(x);

    return 0;
}