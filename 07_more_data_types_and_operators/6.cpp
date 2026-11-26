#include <iostream>
using namespace std;

int main() {

    enum transport { car, truck, airplane, train, boat} t1, t2;
    enum transport t3;
    t1 = car;
    t2 = train;
    transport x = boat;
    t3 = (transport) 3;
    cout << t1 << ' ' << t2 << ' ' << x << ' ' << t3;

    return 0;
}