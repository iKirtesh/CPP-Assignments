//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int num=2;num<=n;num++){
        bool prime = true;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){ prime=false; break; }
        }
        if(prime) cout << num << " ";
    }
    cout << endl;
    return 0;
}
