#include <iostream>
#include <string>
using namespace std;

class Student{ // class
public:
    string name;  // properties
    int age;
    int roll;

    // non-parametrized constructor
    Student(){
        cout<<"Hi! I'm a constructor."<<endl;
    }

    void getinfo(){  // method
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

int main(){
    Student s1; //constructor call

    s1.name = "Jack";
    s1.age = 12;
    s1.roll = 1234;

    s1.getinfo(); //method call
}