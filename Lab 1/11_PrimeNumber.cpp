//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int n, flag=1;
    cout << "Enter a number: ";
    cin >> n;
    if(n<=1) flag=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){ flag=0; break; }
    }
    if(flag) cout << n << " is Prime" << endl;
    else cout << n << " is Not Prime" << endl;
    return 0;
}
