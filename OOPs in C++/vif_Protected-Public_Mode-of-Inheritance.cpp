#include <iostream>
#include <string>
using namespace std;

class Person { // parent class (level 0)
protected:
    string name;
    int age;

    void get_info(){
        cout<<name<<" "<<age<<endl;
    }
};

class Student : public Person { //child class (level 1)
public:
    int roll;

    void get_info(){
        cout<<name<<" "<<age<<" "<<roll<<endl;
    }
};

class GradStudent: public Student{ //child class (level 2)
public:
    string domain;

    void get_info(){
        cout<<name<<" "<<age<<" "<<roll<<endl;
    }
};

int main(){
    Person p1;
    p1.name = "Bob";
    p1.age = 17;

    Student s1;
    s1.name = "Jack";
    s1.age = 12;
    s1.roll = 1234;

    GradStudent gs1;
    gs1.name = "Alice";
    gs1.age = 21;
    gs1.roll = 1823;
    gs1.domain = "AI";
}