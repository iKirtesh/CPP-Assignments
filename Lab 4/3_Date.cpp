// 3. Date class with dd, mm, yy
#include <iostream>
using namespace std;

class Date {
private:
    int dd;
    int mm;
    int yy;
public:
    Date() {
        dd = 1;
        mm = 1;
        yy = 2000;
    }
    Date(int d, int m, int y) {
        dd = d;
        mm = m;
        yy = y;
    }
    void setDay(int d) {
        dd = d;
    }
    void setMonth(int m) {
        mm = m;
    }
    void setYear(int y) {
        yy = y;
    }
    int getDay() {
        return dd;
    }
    int getMonth() {
        return mm;
    }
    int getYear() {
        return yy;
    }
    void display() {
        cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() {
    Date d1;
    d1.display();
    d1.setDay(15);
    d1.setMonth(8);
    d1.setYear(2025);
    d1.display();
    Date d2(2, 9, 2025);
    d2.display();
    return 0;
}
