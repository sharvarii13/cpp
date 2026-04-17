#include <iostream>
using namespace std;

class Demo {
    static int count;

public:
    Demo() { count++; }

    static void show() {
        cout << "Count: " << count;
    }
};

int Demo::count = 0;

int main() {
    Demo d1, d2, d3;
    Demo::show();
}