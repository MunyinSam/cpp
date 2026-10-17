#include <iostream>
#include <bitset>
using namespace std;

int main() {

    int x = 1200007;
    char ch;
    ch = x;

    cout << bitset<8>(ch) << endl;
    cout << bitset<32>(x) << endl;
    cout << sizeof(short) << " " << sizeof(long) << endl;
    cout << sizeof(char) << " " << sizeof(wchar_t) << " " << sizeof(int) << " " << sizeof(float) << endl;

    return 0;
}