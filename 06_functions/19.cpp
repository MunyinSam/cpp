#include <iostream>

using namespace std;

int main() {
    int j, k;
    int &i = j;
    int *ptr;
    int &l = i;

    j = 10;

    cout << j << " " << i << endl;

    k = 121;
    i = k;

    cout << "\n" << j;

    ptr = &i;
    cout << ' ' << ptr << ' ' << l;

    return 0;
}