// 2. Sum & Average of Array
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number of students: ";
    cin >> n;
    int marks[100];
    cout << "Enter marks: ";
    for (int i = 0; i < n; ++i) {
        cin >> marks[i];
        sum += marks[i];
    }
    double avg = (double)sum / n;
    cout << "Total: " << sum << endl;
    cout << "Average: " << avg << endl;
    return 0;
}

