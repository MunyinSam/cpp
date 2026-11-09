#include <iostream>
using namespace std;

char *get_substr(char *sub, char *str);

int main() {
    char *substr;

    substr = get_substr("three", "one two three four");
    cout << "Substring found: " << substr;

    return 0;
}

char *get_substr(char *sub, char *str) {
    int t;
    char *p, *p2, *start;

    for(t=0; str[t]; t++) {
        cout << "Iteration: " << t << endl;
        p = &str[t];
        start = p;
        p2 = sub; // three
        cout << *p2 << ' ' << *p << endl;
        while(*p2 && *p2 == *p) {
            *p2++;
            *p++;
        }
        if (!*p2) {
            return start;
        }
    }
    return 0;
}