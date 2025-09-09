#include <iostream>
using namespace std;

// Program to calculate GCD of two numbers

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int gcd = 1;
    int minVal = (a < b) ? a : b;
    for (int i = 1; i <= minVal; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
    return 0;
}
