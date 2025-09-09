// 4. Point class with x, y
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() {
        x = 0;
        y = 0;
    }
    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }
    void setX(int xVal) {
        x = xVal;
    }
    void setY(int yVal) {
        y = yVal;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    p1.display();
    p1.setX(5);
    p1.setY(10);
    p1.display();
    Point p2(3, 7);
    p2.display();
    return 0;
}
