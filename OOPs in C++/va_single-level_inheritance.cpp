#include <iostream>
#include <string>
using namespace std;

class Person { // parent class
public:
    string name;
    int age;

    Person(string name, int age) {
        cout << "Hi! I'm Parent Constructor." << endl;
        this->name = name;
        this->age = age;
    }
};

class Student : public Person { //child class
public:
    int roll;

    Student(string name, int age, int roll): Person(name, age){
        this->roll = roll;
        cout << "Hi! I'm Child Constructor." << endl;
    }

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s1("Jack", 12, 1234);

    s1.getinfo();
}
