#include <iostream>
using namespace std;

class Patient {
    int id;
    string name;
    float bill;

public:
    Patient() {
        id = 0;
        name = "NA";
        bill = 0;
    }

    Patient(int i, string n, float b) {
        id = i;
        name = n;
        bill = b;
    }

    void display() {
        cout << id << " " << name << " " << bill << endl;
    }
};

int main() {
    Patient p1;
    Patient p2(101, "Rahul", 2000);

    p1.display();
    p2.display();
}