#include <iostream>
using namespace std;

int main() {
    int x;
    for (x=0; x<6; x++) {
        if (x==1) cout << "x is one";
        else if (x==2) cout << "x = 2";
        else cout << x;
    }
    return 0;
}