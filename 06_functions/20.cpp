#include <iostream>
using namespace std;

void f(int i);
void f(int i, int j);
void f(double k);

int main() {

    f(10);
    f(10, 20);
    

    return 0;
}