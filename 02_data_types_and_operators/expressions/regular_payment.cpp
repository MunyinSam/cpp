#include <iostream>
using namespace std;
#include <bitset>

// Payment = IntRate * (Principal/PayPerYeah) /
//  1- ((IntRate/PayPerYear) + 1) ^ (-PayPerYear * NumYears)

int main() {

    double Principle;
    double IntRate;
    double PayPerYear;
    double NumYears;
    double Payment;
    double numer, denom;
    double b, e; // base, exponent

    cout << "Enter principle: ";
    cin >> Principle;

    cout << "Enter interest rate (i.e., 0.075): ";
    cin >> IntRate;

    cout << "Enter pay per year: ";
    cin >> PayPerYear;

    cout << "Enter number of years: ";
    cin >> NumYears;

    numer = IntRate * (Principle / PayPerYear);
    
    e = -(PayPerYear * NumYears);
    b = (IntRate / PayPerYear) + 1;
    denom = 1 - pow(b, e);

    Payment = numer / denom;

    cout << "Payment is " << Payment << " " << bitset<10>(Payment) << endl;


    return 0;
}