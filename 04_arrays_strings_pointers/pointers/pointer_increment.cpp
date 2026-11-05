#include <iostream>

using namespace std;

int main() {
    int *p, num;

    p = &num;

    cout << p;
    p++;
    cout << p;
    
    return 0;
}