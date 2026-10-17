#include <iostream>
#include <bitset>

using namespace std;

int main() {

    // 1. Integral promotion: char and short became int first
    char c = 'A'; // stored as 65
    short s = 10;

    cout << c + s << endl; // 75, not 'K'
    // cout << bitset<4>(s) << endl;    
    cout << sizeof(c + s) << endl;
    cout << c + 1 << endl;
    chout << char(c + 1) << endl; // B (cast back to char)

    // 2. Type promotion: int meets long -> int becomes long
    int i = 5;
    long l = 100;
    cout << sizeof(i + l) << endl; // 8 -> the result is a long
    
    // 3. int meets double -> int becomes double
    int a = 7;
    double d = 2.0;
    cout << a / d << endl; // 3.5

    // 4. Both int
    int b = 2;
    cout << a / b << endl;

    // 5. Operation by operation, not the whole expression at once
    cout << a / b * d << endl;

}