#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived";
    }
};

int main() {
    Derived d;
    d.show();
}