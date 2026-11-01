#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i;
    int sum = 0;

    for(i=1; i<=10; sum += i++) ;

    cout << "Sum is " << sum;

    return 0;
}