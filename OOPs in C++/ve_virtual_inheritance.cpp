#include <iostream>
#include <string>
using namespace std;

class Person{ // Level 0
public:
    string name;
    int age;
};

class Student: virtual public Person{ // Level 1: class1
public:
    int roll;

    void getinfo(){  
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

class Teacher: virtual public Person{ // Level 1: class2
public:
    double salary;

    void getinfo(){  
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class TA: public Student, public Teacher{ // Level 2
public:
    void getinfo(){ 
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    
}