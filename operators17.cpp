// Q17. WAP to implement arithmetic, logical, relational, bitwise operators.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n Arithmetic Operators \n";
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;

    cout << "\n Relational Operators \n";
    cout << (a == b) << " (a == b)\n";
    cout << (a != b) << " (a != b)\n";
    cout << (a > b) << " (a > b)\n";
    cout << (a < b) << " (a < b)\n";
    cout << (a >= b) << " (a >= b)\n";
    cout << (a <= b) << " (a <= b)\n";

    cout << "\n Logical Operators \n";
    cout << ((a > 0 && b > 0)) << " (a > 0 && b > 0)\n";
    cout << ((a > 0 || b > 0)) << " (a > 0 || b > 0)\n";
    cout << (!(a > 0)) << " (!(a > 0))\n";

    cout << "\n Bitwise Operators \n";
    cout << (a & b) << " (a & b)\n";
    cout << (a | b) << " (a | b)\n";
    cout << (a ^ b) << " (a ^ b)\n";
    cout << (~a) << " (~a)\n";
    cout << (a << 1) << " (a << 1)\n";
    cout << (a >> 1) << " (a >> 1)\n";

    return 0;
}
