#include <iostream>
using namespace std;

char myfunc(unsigned char ch);
char myfunc(char ch);

int main() {
    // cout << sizeof(unsigned char);
    cout << myfunc('c');
    // cout << myfunc(88);
    return 0;
}

char myfunc(unsigned char ch) {
    return ch-1;
}

char myfunc(char ch) {
    return ch+1;
}