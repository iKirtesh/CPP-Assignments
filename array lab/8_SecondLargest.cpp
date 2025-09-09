// 8. Second Largest Element (without sorting)
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
    int first = arr[0], second = -1e9;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == -1e9)
        cout << "No second largest element." << endl;
    else
        cout << "Second largest element: " << second << endl;
    return 0;
}

