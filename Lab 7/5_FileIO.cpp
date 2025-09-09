// 5. File IO Application
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n1. Write File\n2. Read File\n3. Copy File\n4. Exit\nEnter choice: ";
        cin >> choice; // Fix: read user input for menu
        switch (choice) {
            case 1: {
                string fname, data;
                cout << "Enter filename: ";
                cin >> fname;
                cout << "Enter data (end with # on a new line):" << endl;
                ofstream fout(fname);
                cin.ignore();
                while (true) {
                    getline(cin, data);
                    if (data == "#") break;
                    fout << data << endl;
                }
                fout.close();
                break;
            }
            case 2: {
                string fname, line;
                cout << "Enter filename: ";
                cin >> fname;
                ifstream fin(fname);
                if (!fin) {
                    cout << "File not found!" << endl;
                    break;
                }
                while (getline(fin, line)) {
                    cout << line << endl;
                }
                fin.close();
                break;
            }
            case 3: {
                string src, dest, line;
                cout << "Enter source filename: ";
                cin >> src;
                cout << "Enter destination filename: ";
                cin >> dest;
                ifstream fin(src);
                if (!fin) {
                    cout << "Source file not found!" << endl;
                    break;
                }
                ofstream fout(dest);
                while (getline(fin, line)) {
                    fout << line << endl;
                }
                fin.close();
                fout.close();
                cout << "Copied." << endl;
                break;
            }
        }
    } while (choice != 4);
    return 0;
}
