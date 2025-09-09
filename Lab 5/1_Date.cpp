// 1. Date class with day, month, year
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void display() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1; // no-argument constructor
    Date d2(2, 9, 2025); // parameterized constructor
    cout << "Date using no-argument constructor: ";
    d1.display();
    cout << "Date using parameterized constructor: ";
    d2.display();
    return 0;
}
