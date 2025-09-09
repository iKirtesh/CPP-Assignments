//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
    return 0;
}
