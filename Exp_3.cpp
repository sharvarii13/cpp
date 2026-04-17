#include <iostream>
using namespace std;

class Student {
    int n;
    float marks[10], total = 0;

public:
    void input() {
        cout << "Enter number of subjects: ";
        cin >> n;
        for(int i=0;i<n;i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void display() {
        cout << "Percentage: " << total/n << "%";
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}