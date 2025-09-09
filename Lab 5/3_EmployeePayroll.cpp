// 3. Employee payroll software for ABC organization
#include <iostream>
#include <string>
using namespace std;

class Employee {
    int empId;
    string empName;
    double basicSalary;
    double hra;
    double medical;
    double pf;
    double pt;
    double netSalary;
    double grossSalary;
public:
    Employee(int id, string name, double basic, double med = 1000)
        : empId(id), empName(name), basicSalary(basic), medical(med) {
        hra = 0.5 * basicSalary;
        pf = 0.12 * basicSalary;
        pt = 200;
        grossSalary = basicSalary + hra + medical;
        netSalary = grossSalary - (pt + pf);
    }
    void display() {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "Medical: " << medical << endl;
        cout << "PF: " << pf << endl;
        cout << "PT: " << pt << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Employee e1(1, "John Doe", 50000);
    cout << "Employee Details:\n";
    e1.display();
    return 0;
}
