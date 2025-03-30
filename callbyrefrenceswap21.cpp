//Q21.WAP to swap two numbers using call by reference.
#include <iostream>
using namespace std;

void swap(int &x, int &y) { 
    int temp = x;
    x = y;
    y = temp;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swap(a, b);

    cout << "\nAfter Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
