#include <iostream>
#include <string>
using namespace std;

class Student {
public:
int rollNo;
string name;


Student(int r, string n) {
    rollNo = r;
    name = n;
}

void display() {
    cout << "Roll Number: " << rollNo << endl;
    cout << "Name: " << name << endl;
}


};

int main() {
Student s1(101, "Arun");


s1.display();

return 0;


}
