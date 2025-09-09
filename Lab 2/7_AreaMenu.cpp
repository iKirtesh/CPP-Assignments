#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Compute area of circle\n";
        cout << "2. Compute area of rectangle\n";
        cout << "3. Compute area of triangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                double r;
                cout << "Enter radius: ";
                cin >> r;
                cout << "Area of circle: " << 3.14159 * r * r << endl;
                break;
            }
            case 2: {
                double l, w;
                cout << "Enter length and width: ";
                cin >> l >> w;
                cout << "Area of rectangle: " << l * w << endl;
                break;
            }
            case 3: {
                double b, h;
                cout << "Enter base and height: ";
                cin >> b >> h;
                cout << "Area of triangle: " << 0.5 * b * h << endl;
                break;
            }
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
    return 0;
}
