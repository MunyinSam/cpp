#include <iostream>

using namespace std;

int main() {
    int nums[10] = {1, 2, 3, 4};
    int i;

    // cout << nums;

    *(nums + 2) = 100;


    for(i=0; nums[i]; i++) {
        cout << nums[i];
    }

    cout << ' ';

    cout << nums[2];

    return 0;
}