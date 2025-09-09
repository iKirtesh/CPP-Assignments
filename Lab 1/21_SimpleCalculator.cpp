//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+ - * /): ";
    cin >> op;

    switch(op){
        case '+': cout << "Result = " << a+b; break;
        case '-': cout << "Result = " << a-b; break;
        case '*': cout << "Result = " << a*b; break;
        case '/':
            if(b!=0) cout << "Result = " << (float)a/b;
            else cout << "Division by zero not allowed";
            break;
        default: cout << "Invalid operator";
    }
    cout << endl;
    return 0;
}
