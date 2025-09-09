//
// Created by kirte on 25-08-2025.
//

#include<iostream>
using namespace std;

int main() {
    int qty, total = 0;
    int choice;

    do {
        cout << "\n--- Pizza Shop Menu ---\n";
        cout << "1. Margherita (100)\n2. Farmhouse (200)\n3. Peppy Paneer (300)\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice>=1 && choice<=3){
            cout << "Enter quantity: ";
            cin >> qty;
            if(choice==1) total += 100*qty;
            else if(choice==2) total += 200*qty;
            else if(choice==3) total += 300*qty;
        }
    } while(choice!=4);
    cout << "Total Amount = " << total << endl;
    return 0;
}