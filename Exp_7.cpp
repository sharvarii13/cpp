#include <iostream>
using namespace std;

class Test {
    int a, b;

public:
    Test(int x, int y) {
        a = x; b = y;
    }

    friend void show(Test t);
};

void show(Test t) {
    cout << t.a + t.b;
}

int main() {
    Test t(10,20);
    show(t);
}