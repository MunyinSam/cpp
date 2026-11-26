#include <iostream>
using namespace std;

int running_avg(int i);

int main() {

    int num;

    do {
        cout << "Enter numbers (-1 to quit) ";
        cin >> num;
        if (num != -1)
            cout << "Running average is: " << running_avg(num);
        cout << endl;
    } while (num > -1);
        
    return 0;
}

int running_avg(int i) {
    static int sum = 0, count = 0;

    sum = sum + i;
    count++;

    return sum / count;
}