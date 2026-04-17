#include <iostream>
using namespace std;

class Student {
public:
    int roll;
};

class Result : public Student {
public:
    int marks;

    void input() {
        cin >> roll >> marks;
    }

    void display() {
        cout << roll << " " << marks;
    }
};

int main() {
    Result r;
    r.input();
    r.display();
}