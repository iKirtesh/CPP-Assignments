// 2. Vector of Users (Menu Driven)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class User {
private:
    int userid;
    string name;
    string email;
    string pwd;
public:
    User(int id, string n, string e, string p) {
        userid = id;
        name = n;
        email = e;
        pwd = p;
    }
    int getId() const { return userid; }
    string getName() const { return name; }
    string getEmail() const { return email; }
    string getPwd() const { return pwd; }
    void setPwd(const string& newPwd) { pwd = newPwd; }
    void display() const {
        cout << "ID: " << userid << ", Name: " << name << ", Email: " << email << endl;
    }
};

int main() {
    vector<User> users;
    int choice;
    do {
        cout << "\n1. Add User\n2. Display All\n3. Search User\n4. Change Pwd\n5. Delete All\n6. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int id;
                string name, email, pwd;
                cout << "Enter id: ";
                cin >> id;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter email: ";
                getline(cin, email);
                cout << "Enter password: ";
                getline(cin, pwd);
                users.emplace_back(id, name, email, pwd);
                break;
            }
            case 2:
                for (const auto& u : users) {
                    u.display();
                }
                break;
            case 3: {
                int id;
                cout << "Enter id to search: ";
                cin >> id;
                bool found = false;
                for (const auto& u : users) {
                    if (u.getId() == id) {
                        u.display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Not found" << endl;
                }
                break;
            }
            case 4: {
                int id;
                string newPwd;
                cout << "Enter id: ";
                cin >> id;
                cout << "Enter new password: ";
                cin >> newPwd;
                for (auto& u : users) {
                    if (u.getId() == id) {
                        u.setPwd(newPwd);
                        cout << "Password updated." << endl;
                    }
                }
                break;
            }
            case 5:
                users.clear();
                cout << "All users deleted." << endl;
                break;
        }
    } while (choice != 6);
    return 0;
}
