#include <iostream>
using namespace std;

int main() {
    int i, j;
    j = 10;
    i = (j += 1, j += 999, j -= 10);
    cout << i;
    return 0;
}