#include <iostream>

using namespace std;

class Vehicle {
    public:
    int passengers;
    int fuelcap;
    int mpg;

    int range();
};

int Vehicle::range() {
    return mpg * fuelcap;
}

int main() {
    Vehicle minivan;
    int range;

    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    range = minivan.fuelcap * minivan.mpg;
    int range1 = minivan.range();
    std::cout << minivan.passengers << ' ' << minivan.mpg << ' ' << range;
    cout << range1;
    return 0;
}