// 7. Namespace Student Classes
#include <iostream>
#include <string>

namespace CDAC {
    class Student {
    private:
        int rollno;
        std::string name;
    public:
        Student(int r, std::string n) {
            rollno = r;
            name = n;
        }
        void display() {
            std::cout << "[CDAC] Roll: " << rollno << ", Name: " << name << std::endl;
        }
    };
}

namespace IACSD {
    class Student {
    private:
        int rollno;
        std::string name;
    public:
        Student(int r, std::string n) {
            rollno = r;
            name = n;
        }
        void display() {
            std::cout << "[IACSD] Roll: " << rollno << ", Name: " << name << std::endl;
        }
    };
}

int main() {
    CDAC::Student s1(1, "Amit");
    IACSD::Student s2(2, "Sunil");
    s1.display();
    s2.display();
    return 0;
}

