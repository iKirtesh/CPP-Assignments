// 7. Sort Array (Ascending & Descending) using Bubble Sort
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, bool ascending = true) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bubbleSort(arr, n, true);
    cout << "Array in ascending order: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;
    bubbleSort(arr, n, false);
    cout << "Array in descending order: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

