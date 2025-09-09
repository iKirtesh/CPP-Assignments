// 3. Set of Cities (Menu Driven)
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set<string> cities;
    int choice;
    do {
        cout << "\n1. Add City\n2. Display All\n3. Search City\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string city;
                cout << "Enter city name: ";
                cin.ignore();
                getline(cin, city);
                cities.insert(city);
                break;
            }
            case 2:
                cout << "Cities: ";
                for (const auto& c : cities) {
                    cout << c << ", ";
                }
                cout << endl;
                break;
            case 3: {
                string city;
                cout << "Enter city to search: ";
                cin.ignore();
                getline(cin, city);
                if (cities.find(city) != cities.end()) {
                    cout << "Found" << endl;
                } else {
                    cout << "Not found" << endl;
                }
                break;
            }
        }
    } while (choice != 4);
    return 0;
}
