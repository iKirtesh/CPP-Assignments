//
// Created by kirte on 25-08-2025.
//

#include <iostream>
using namespace std;

int main() {
    float salary, tax = 0;
    cout << "Enter annual basic salary: ";
    cin >> salary;

    if (salary < 150000)
        tax = 0;
    else if (salary <= 300000)
        tax = (salary - 150000) * 0.2;
    else
        tax = (150000 * 0.2) + (salary - 300000) * 0.3;

    cout << "Income Tax = " << tax << endl;
    return 0;
}
