#include <iostream>
using namespace std;

template <class T>
void swapNum(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x=5, y=10;
    swapNum(x,y);
    cout << x << " " << y;
}