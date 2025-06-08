#include <iostream>
#include <string>
using namespace std;

class Student{ // class
public:
    string name;  // properties
    int age;
    int roll;

    // constructor0
    Student(){
        cout<<"Hi! I'm the constructor0."<<endl;
    }

    // constructor1
    Student(string name, int age, int roll){
        cout<<"Hi! I'm the constructor1."<<endl;
        this->name = name;
        this->age = age;
        this->roll = roll;
    }

    // constructor2
    Student(int age, int roll, string name){
        cout<<"Hi! I'm the constructor2."<<endl;
        this->name = name;
        this->age = age;
        this->roll = roll;
    }

    // constructor3
    Student(int age, int roll){
        cout<<"Hi! I'm the constructor3."<<endl;
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
    Student s1("Jack", 12, 1234); //constructor1 call
    Student s2; //constructor0 call
    Student s3(14, 12345, "Alice"); //constructor2 call
    Student s4(12, 123); //constructor3 call

    s1.getinfo(); //method call
    s2.getinfo();
    s3.getinfo();
    s4.getinfo();
}