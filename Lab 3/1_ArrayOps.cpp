// Program to create an array and find sum, average, max, min
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

    int sum = 0;
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    double avg = static_cast<double>(sum) / n;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
