#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void InvertCaseStr(char *str);

int main() {
    char str[80];
    int i;
    strcpy(str, "This Is A Test");
    InvertCaseStr(str);
    
    cout << str;
    return 0;
}

void InvertCaseStr(char *str) {
    // int i = 0;
    while(*str) {
        // i++;
        if(isupper(*str)) *str = tolower(*str);
        else if(islower(*str)) *str = toupper(*str);
        str++;
    }
    // cout << i;
}