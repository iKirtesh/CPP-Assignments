#include <iostream>
using namespace std;

int main() {
    char ch;
    int n;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter n: ";
    cin >> n;
    cout << "Next " << n << " characters: ";
    for (int i = 1; i <= n; ++i) {
        cout << char(ch + i) << " ";
    }
    cout << endl;
    return 0;
}
