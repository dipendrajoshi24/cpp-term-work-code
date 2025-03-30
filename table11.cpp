//Q11. WAP to print the table of any given number in proper format.4
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n; 

    cout << "Multiplication Table of " << n << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl; 
    }
    return 0;
}
