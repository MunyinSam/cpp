#include <iostream>

using namespace std;
void show_binary(unsigned int u);

int main() {
    char ch;

    for(int i = 0; i< 10;i ++) {
        ch = 'a' + i;
        cout << ch;

        ch = ch & 223;
        cout << ch << ' ';
    }
    cout << endl;
    show_binary(15);

    return 0;
}

void show_binary(unsigned int u) {
    int t;

    for(t=128; t > 0; t = t/2)
        if(u & t) cout << "1 ";
        else cout << "0 ";
    
    cout << "\n";
}