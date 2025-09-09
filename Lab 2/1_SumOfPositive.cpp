//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter positive numbers (enter a negative to stop): " << endl;
    while (true) {
        cin >> n;
        if (n < 0) break;
        sum += n;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
