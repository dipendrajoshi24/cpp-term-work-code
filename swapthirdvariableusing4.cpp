//Q4. WAP to swap two numbers using third variable.
#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swap: a=" << a << ", b=" << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap: a=" << a << ", b=" << b << endl;

    return 0;
}