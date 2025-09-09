#include <iostream>
using namespace std;

// Program to calculate factorial of a number
int main() {
    int n;
    long long fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}
