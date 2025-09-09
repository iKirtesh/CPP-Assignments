//
// Created by kirte on 29-08-2025.
//
#include<iostream>
using namespace std;

template<typename T> void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 6;
    swapValues(x, y);
    cout << "Swapped Ints: " << x << " " << y << endl;

    double d1 = 3.5, d2 = 7.2;
    swapValues(d1, d2);
    cout << "Swapped Doubles: " << d1 << " " << d2 << endl;

    string s1 = "Hello", s2 = "World";
    swapValues(s1, s2);
    cout << "Swapped Strings: " << s1 << " " << s2 << endl;

    return 0;
}

