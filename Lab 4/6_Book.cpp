// 4. Book class with bname, id, author, price
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int id;
    string bname;
    string author;
    double price;
public:
    Book() {
        id = 0;
        bname = "";
        author = "";
        price = 0.0;
    }
    Book(int i, string n, string a, double p) {
        id = i;
        bname = n;
        author = a;
        price = p;
    }
    void setId(int i) { id = i; }
    void setBname(string n) { bname = n; }
    void setAuthor(string a) { author = a; }
    void setPrice(double p) { price = p; }
    int getId() { return id; }
    string getBname() { return bname; }
    string getAuthor() { return author; }
    double getPrice() { return price; }
    void display() {
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << bname << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1;
    b1.setId(101);
    b1.setBname("C++ Primer");
    b1.setAuthor("Stanley Lippman");
    b1.setPrice(599.99);
    b1.display();

    Book b2(102, "Effective C++", "Scott Meyers", 499.50);
    b2.display();
    return 0;
}
