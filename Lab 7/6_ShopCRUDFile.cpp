// 6. CRUD Shop Application Using File
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm> // Added for remove_if
using namespace std;

class Product {
private:
    int prdid;
    string name;
    int qty;
    double price;
public:
    Product() {}
    Product(int id, string n, int q, double p) {
        prdid = id;
        name = n;
        qty = q;
        price = p;
    }
    int getId() const { return prdid; }
    string getName() const { return name; }
    int getQty() const { return qty; }
    double getPrice() const { return price; }
    void setQty(int q) { qty = q; }
    void setPrice(double p) { price = p; }
    void display() const {
        cout << "ID: " << prdid << ", Name: " << name << ", Qty: " << qty << ", Price: " << price << endl;
    }
    string serialize() const {
        return to_string(prdid) + "," + name + "," + to_string(qty) + "," + to_string(price);
    }
    static Product deserialize(const string& line) {
        int id, qty; double price; string name;
        size_t p1 = line.find(','), p2 = line.find(',', p1+1), p3 = line.find(',', p2+1);
        id = stoi(line.substr(0, p1));
        name = line.substr(p1+1, p2-p1-1);
        qty = stoi(line.substr(p2+1, p3-p2-1));
        price = stod(line.substr(p3+1));
        return Product(id, name, qty, price);
    }
};

void saveProducts(const vector<Product>& prds, const string& fname) {
    ofstream fout(fname);
    for (const auto& p : prds) fout << p.serialize() << endl;
    fout.close();
}

vector<Product> loadProducts(const string& fname) {
    vector<Product> prds;
    ifstream fin(fname);
    string line;
    while (getline(fin, line)) prds.push_back(Product::deserialize(line));
    fin.close();
    return prds;
}

int main() {
    string fname = "products.txt";
    vector<Product> prds = loadProducts(fname);
    int choice;
    do {
        cout << "\n1. Add\n2. Display\n3. Search\n4. Update\n5. Delete\n6. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int id, qty;
                string name;
                double price;
                cout << "Enter id: ";
                cin >> id;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter qty: ";
                cin >> qty;
                cout << "Enter price: ";
                cin >> price;
                prds.emplace_back(id, name, qty, price);
                saveProducts(prds, fname);
                break;
            }
            case 2:
                for (const auto& p : prds) {
                    p.display();
                }
                break;
            case 3: {
                int id;
                cout << "Enter id: ";
                cin >> id;
                bool found = false;
                for (const auto& p : prds) {
                    if (p.getId() == id) {
                        p.display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Not found" << endl;
                }
                break;
            }
            case 4: {
                int id;
                cout << "Enter id: ";
                cin >> id;
                for (auto& p : prds) {
                    if (p.getId() == id) {
                        int qty;
                        double price;
                        cout << "Enter new qty: ";
                        cin >> qty;
                        cout << "Enter new price: ";
                        cin >> price;
                        p.setQty(qty);
                        p.setPrice(price);
                        saveProducts(prds, fname);
                        cout << "Product updated." << endl;
                    }
                }
                break;
            }
            case 5: {
                int id;
                cout << "Enter id: ";
                cin >> id;
                prds.erase(remove_if(prds.begin(), prds.end(), [id](const Product& p){ return p.getId() == id; }), prds.end());
                saveProducts(prds, fname);
                cout << "Product deleted if it existed." << endl;
                break;
            }
        }
    } while (choice != 6);
    return 0;
}
