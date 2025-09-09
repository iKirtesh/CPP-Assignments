// 4. Search an Element (Linear Search)
#include <iostream>
using namespace std;

int main() {
    int n, key, found = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter number to search: ";
    cin >> key;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    if (found)
        cout << key << " is present in the array." << endl;
    else
        cout << key << " is not present in the array." << endl;
    return 0;
}

