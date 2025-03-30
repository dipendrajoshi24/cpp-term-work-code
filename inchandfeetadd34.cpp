//Q34.WAP to create a structure distance having members inch and feet . Now make a function to add 2 given distances.
#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};
Distance addDistance(Distance d1, Distance d2) {
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    if (result.inch >= 12) {
        result.feet += 1;
        result.inch -= 12;
    }
    return result;
}
int main() {
    Distance d1, d2, sum;

    cout << "Enter first distance (feet and inch): ";
    cin >> d1.feet >> d1.inch;

    cout << "Enter second distance (feet and inch): ";
    cin >> d2.feet >> d2.inch;

    sum = addDistance(d1, d2);

    cout << "Total Distance: " << sum.feet << " feet " << sum.inch << " inches\n";
    return 0;
}
