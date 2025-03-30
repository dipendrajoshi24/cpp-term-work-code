//Q19.WAP to calculate Simple Interest using functions and make rate as default argument.
#include <iostream>
using namespace std;

float simpleInterest(float principal, float time, float rate = 5.0) {
    return (principal * time * rate) / 100;
}
int main() {
    float p, t, r;
    char choice;

    cout << "Enter Principal amount: ";
    cin >> p;
    cout << "Enter Time (in years): ";
    cin >> t;

    cout << "Do you want to enter rate? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "Enter Rate: ";
        cin >> r;
        cout << "Simple Interest: " << simpleInterest(p, t, r) <<endl;
    } else {
        cout << "Simple Interest (with default rate 5%): " << simpleInterest(p, t) << endl;
    }

    return 0;
}
