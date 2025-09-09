// Program using inline functions to calculate area of square, rectangle, and circle
#include <iostream>
using namespace std;

inline double areaSquare(double side) {
    return side * side;
}

inline double areaRectangle(double length, double breadth) {
    return length * breadth;
}

inline double areaCircle(double r) {
    return 3.14159 * r * r;
}

int main() {
    double side, length, breadth, radius;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << areaSquare(side) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << areaRectangle(length, breadth) << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << areaCircle(radius) << endl;

    return 0;
}

