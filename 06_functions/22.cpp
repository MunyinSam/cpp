#include <iostream>
#include <cstring>
using namespace std;

void mystrcat(char *s1, char *s2, int len = 0);

int main() {
    char str1[80] = "this is a test";
    char str2[80] = "0123456789";

    mystrcat(str1, str2, 5);
    cout << str1 << '\n';

    strcpy(str1, "this is a test"); // reset str1

    mystrcat(str1, str2);
    cout << str1 << '\n';

    return 0;
}

void mystrcat(char *s1, char *s2, int len) {
    // cout << s1 << ' ' << s2;
    while(*s1) s1++; // to the end of s1;

    if(len==0) len = strlen(s2);

    while(*s2 && len) {
        *s1 = *s2;
        s1++;
        s2++;
        len--;
    }

    *s1 = '\0';
}