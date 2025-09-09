// 5. ComplexNumber class with real, imaginary
#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;
public:
    ComplexNumber() {
        real = 0;
        imaginary = 0;
    }
    ComplexNumber(double r, double i) {
        real = r;
        imaginary = i;
    }
    void setReal(double r) {
        real = r;
    }
    void setImaginary(double i) {
        imaginary = i;
    }
    double getReal() {
        return real;
    }
    double getImaginary() {
        return imaginary;
    }
    void display() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    ComplexNumber c1;
    c1.display();
    c1.setReal(3.5);
    c1.setImaginary(2.1);
    c1.display();
    ComplexNumber c2(5.2, 4.8);
    c2.display();
    return 0;
}
