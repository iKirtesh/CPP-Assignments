#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Program to compute x raised to n
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Print all prime numbers between 1 and n
    cout << "Prime numbers between 1 and " << n << ": ";
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
