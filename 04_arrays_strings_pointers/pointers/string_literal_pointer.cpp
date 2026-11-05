#include <iostream>

using namespace std;

int main() {

    char *ptr;
    ptr = "Pointers are good for C++";

    cout << ptr << ' ' << sizeof(ptr);

    const char arr[] = "Pointers are good for C++";
    cout << sizeof(arr);

    return 0;
}