//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int n, fact=1;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1;i<=n;i++)
        fact *= i;
    cout << "Factorial = " << fact << endl;
    return 0;
}
