//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(a>b){
        if(a>c) cout << "Greatest = " << a << endl;
        else cout << "Greatest = " << c << endl;
    }else{
        if(b>c) cout << "Greatest = " << b << endl;
        else cout << "Greatest = " << c << endl;
    }
    return 0;
}
