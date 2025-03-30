// Q18. WAP to overload area function to calculate area of circle, square, rectangle and triangle.
#include <iostream>
#include <cmath>
using namespace std;

float area(float radius) { 
    return 3.1416 * radius * radius;
}
int area(int side) {
    return side * side;
}
int area(int length, int breadth) { 
    return length * breadth;
}
float area(float base, float height, bool isTriangle) { 
    if (isTriangle)
        return 0.5 * base * height;
    return 0; 
}
int main() {
    float r, base, height;
    int side, length, breadth;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle: " << area(r) << endl;

    cout << "\nEnter side of square: ";
    cin >> side;
    cout << "Area of Square: " << area(side) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << area(length, breadth) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << area(base, height, true) << endl;

    return 0;
}
