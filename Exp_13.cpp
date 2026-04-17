#include <iostream>
using namespace std;

class A {
public:
    void show(int x) {
        cout << x;
    }
};

class B : public A {
public:
    void show() {
        cout << "Overridden";
    }
};

int main() {
    B obj;
    obj.show();
}