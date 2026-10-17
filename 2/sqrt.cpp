#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z;

    x = 5.0;
    y = 4.0;

    z = sqrt(x*x + y*y);

    cout << "Hypotenuse is " << z << endl;
    // std::cout << __cplusplus << '\n';

    return 0;
}