#include <iostream>
using namespace std;

class Calc {
    int a, b;

public:
    void input() {
        cin >> a >> b;
    }

    inline int add() {
        return a + b;
    }
};

int main() {
    Calc c;
    c.input();
    cout << c.add();
}