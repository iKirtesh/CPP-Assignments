// 1. Vector of Ints (Menu Driven)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void showVector(const vector<int>& v) {
    cout << "[ ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> v;
    int choice;
    do {
        cout << "\n1. Add\n2. Show All\n3. Search\n4. Sort\n5. Reverse\n6. Clear\n7. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int val;
                cout << "Enter int: ";
                cin >> val;
                v.push_back(val);
                break;
            }
            case 2:
                showVector(v);
                break;
            case 3: {
                int key;
                cout << "Enter value to search: ";
                cin >> key;
                bool found = false;
                for (int i = 0; i < v.size(); ++i) {
                    if (v[i] == key) {
                        cout << "Found at position: " << i << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Not found" << endl;
                }
                break;
            }
            case 4:
                sort(v.begin(), v.end());
                cout << "Sorted: ";
                showVector(v);
                break;
            case 5:
                reverse(v.begin(), v.end());
                cout << "Reversed: ";
                showVector(v);
                break;
            case 6:
                v.clear();
                cout << "Cleared: ";
                showVector(v);
                break;
        }
    } while (choice != 7);
    return 0;
}
