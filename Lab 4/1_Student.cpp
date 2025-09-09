// 1. Student class with rollno, marks1, marks2, marks3
#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    int marks1;
    int marks2;
    int marks3;
public:
    void acceptInfo() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks for 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }
    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;
        int total = marks1 + marks2 + marks3;
        double percent = total / 3.0;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percent << "%" << endl;
        char grade;
        if (percent >= 75) {
            grade = 'A';
        } else if (percent >= 60) {
            grade = 'B';
        } else if (percent >= 50) {
            grade = 'C';
        } else if (percent >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.acceptInfo();
    s.display();
    return 0;
}
