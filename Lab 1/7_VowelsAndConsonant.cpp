//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a lowercase character: ";
    cin >> ch;
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        cout << ch << " is a Vowel" << endl;
    else
        cout << ch << " is a Consonant" << endl;
    return 0;
}
