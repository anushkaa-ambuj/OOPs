#include <iostream>
#include <string>
using namespace std;

class Student{ // class
public:
    string name;  // properties
    int age;
    int roll;

    // parametrized constructor
    Student(string name, int age, int roll){
        cout<<"Hi! I'm a constructor."<<endl;
        this->name = name;
        this->age = age;
        this->roll = roll;
    }

    void getinfo(){  // method
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

int main(){
    Student s1("Jack", 12, 1234); //constructor call

    s1.getinfo(); //method call
}