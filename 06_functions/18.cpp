#include <iostream>
using namespace std;

double &change_it(int i);

double vals[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

int main() {

    int i;
    double* ptr;

    cout << "Here are the original values: ";
    for(i=0;i<5;i++) {
        cout << vals[i] << ' ';
    }
    cout << '\n';

    ptr = &change_it(1);
    cout << ptr << ' ' << *ptr << endl;

    change_it(1) = 5298.23; // change second element

    cout << endl << *ptr << endl;


    change_it(3) = -98.8;

    cout << "Here are the changed values: ";
    for(i=0;i<5;i++) {
        cout << vals[i] << ' ';
    }
    cout <<  '\n';

    return 0;
}

double &change_it(int i) {
    return vals[i];
}