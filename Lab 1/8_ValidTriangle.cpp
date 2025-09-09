//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three angles of triangle: ";
    cin >> a >> b >> c;
    if (a + b + c == 180 && a>0 && b>0 && c>0)
        cout << "Valid Triangle" << endl;
    else
        cout << "Invalid Triangle" << endl;
    return 0;
}
