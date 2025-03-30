//Q32..WAP to create a structure time  having members hours min and sec. Now make a function to add 2 given time.
#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};
Time addTime(Time t1, Time t2) {
    Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.seconds %= 60;
    result.hours = t1.hours + t2.hours + (result.minutes / 60);
    result.minutes %= 60;

    return result;
}
int main() {
    Time t1, t2, sum;

    cout << "Enter first time (hours minutes seconds): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter second time (hours minutes seconds): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    sum = addTime(t1, t2);

    cout << "Total Time: " << sum.hours << " hours " << sum.minutes << " minutes " << sum.seconds << " seconds\n";
    return 0;
}
