//
// Created by kirte on 29-08-2025.
//

#include<iostream>
using namespace std;

template<typename T> T findMax(const T &a, const T &b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max Int: " << findMax(10, 20) << endl;
    cout << "Max Float: " << findMax(5.5f, 2.3f) << endl;
    cout << "Max Char: " << findMax('A', 'Z') << endl;
    return 0;
}