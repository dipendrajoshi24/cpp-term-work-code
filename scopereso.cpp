//Q9. WAP to show the use of scope resolution operator.
#include <iostream>
using namespace std;

int globalvar = 50;

void display() {
    int localvar = 20;
    cout << "Local variable: " << localvar << endl;
    cout << "Global variable: " << ::globalvar << endl; 
}
void demonstrateScopeResolution() {
    display(); 
}
int main() {
    demonstrateScopeResolution();
    return 0;
}
