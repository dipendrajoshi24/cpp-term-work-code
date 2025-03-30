// Q20. WAP to swap 2 numbers using call by value.
#include <iostream>
using namespace std;

void swap(int, int); 

int main() {
    int a, b;
    cout << "Enter value of a & b: ";
    cin >> a >> b;

    cout << "\nValue before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);
    return 0;
}
void swap(int x, int y) {
    int t;
    t = x;
    x = y;
    y = t;

    cout << "\nValue after swapping inside function:" << endl;
    cout << "a = " << x << endl;
    cout << "b = " << y << endl;
}
