//
// Created by kirte on 25-08-2025.
//

#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "After swap: a=" << a << " b=" << b << endl;
    return 0;
}