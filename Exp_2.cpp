#include <iostream>
using namespace std;

class Hotel {
    int tableNo;
    string name;
    long long contact;
    float price, discount, bill;

public:
    void input() {
        cout << "Enter Table No: ";
        cin >> tableNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Contact: ";
        cin >> contact;
        cout << "Enter Item Price: ";
        cin >> price;
    }

    void calculate() {
        discount = price * 0.05;
        bill = price - discount;
    }

    void display() {
        cout << "\nBill Amount: " << bill;
    }
};

int main() {
    Hotel h;
    h.input();
    h.calculate();
    h.display();
}