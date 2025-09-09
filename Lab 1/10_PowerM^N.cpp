//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int m, n, result=1;
    cout << "Enter m and n: ";
    cin >> m >> n;
    for(int i=0;i<n;i++)
        result *= m;
    cout << m << "^" << n << " = " << result << endl;
    return 0;
}
