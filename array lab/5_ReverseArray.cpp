// 5. Reverse Array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

