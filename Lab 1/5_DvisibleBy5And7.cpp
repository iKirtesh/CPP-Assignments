//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 5 == 0 && n % 7 == 0)
        cout << n << " is divisible by 5 and 7" << endl;
    else
        cout << n << " is not divisible by 5 and 7" << endl;
    return 0;
}
