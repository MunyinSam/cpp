#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "this is a test";
    char *start, *end;
    int len;
    char t;

    cout << "Original: " << str << "\n";

    len = strlen(str);
    start = str; // &str[0]
    end = &str[len - 1]; // end - str + len - 1

    while(start < end) {
        // swap chars
        t = *start;
        *start = *end;
        *end = t;

        start++;
        end--;
    }

    cout << "Reverse: " << str << endl;

    return 0;
}