// 2. Employee class with id, name, dob (Date)
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void accept() {
        cout << "Enter day, month, year: ";
        cin >> day >> month >> year;
    }
    void display() {
        cout << day << "/" << month << "/" << year;
    }
};

class Employee {
private:
    int id;
    string name;
    Date dob;
public:
    Employee() {
        id = 0;
        name = "";
        dob = Date();
    }
    Employee(int i, string n, Date d) {
        id = i;
        name = n;
        dob = d;
    }
    void accept() {
        cout << "Enter employee id: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter date of birth: ";
        dob.accept();
    }
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "DOB: ";
        dob.display();
        cout << endl;
    }
};

int main() {
    Employee e1;
    e1.accept();
    cout << "\nEmployee Information:\n";
    e1.display();

    Date d(15, 8, 1990);
    Employee e2(2, "Alice", d);
    cout << "\nEmployee 2 Information:\n";
    e2.display();
    return 0;
}
