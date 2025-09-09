//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int n, sumEven=0, sumOdd=0;
    cout << "Enter n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%2==0) sumEven+=i;
        else sumOdd+=i;
    }
    cout << "Sum of Even = " << sumEven << endl;
    cout << "Sum of Odd = " << sumOdd << endl;
    return 0;
}
