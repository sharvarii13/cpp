#include <iostream>
using namespace std;

class Employee {
public:
    int id;
};

class Dept : public Employee {
public:
    string dept;
};

class Salary : public Dept {
public:
    int sal;

    void input() {
        cin >> id >> dept >> sal;
    }

    void display() {
        cout << id << " " << dept << " " << sal;
    }
};

int main() {
    Salary s;
    s.input();
    s.display();
}