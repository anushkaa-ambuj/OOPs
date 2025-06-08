#include <iostream>
#include <string>
using namespace std;

class Person { // parent class (level 0)
public:
    string name;
    int age;
};

class Student : public Person { //child class (level 1)
public:
    int roll;
};

class GradStudent: public Student{ //child class (level 2)
public:
    string domain;
};

int main(){
    GradStudent gs1;
    gs1.name = "Alice";
    gs1.age = 21;
    gs1.roll = 1823;
    gs1.domain = "AI";

    cout<<gs1.name<<" "<<gs1.age<<" "<<gs1.roll<<" "<<gs1.domain<<endl;
}