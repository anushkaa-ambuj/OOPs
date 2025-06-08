#include <iostream>
#include <string>
using namespace std;

class Person{ //parent class
public:
    string name;
    int age;
};

class Student: public Person{ //student1 class
public:
    int roll;

    void getinfo(){  
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

class Teacher: public Person{  //student2 class
public:
    double salary;

    void getinfo(){  
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    Person p1;
    Student s1;
    s1.name = "Jack";
    s1.age = 12;
    s1.roll = 1234;

    Teacher t1;
    t1.name = "Anu";
    t1.age = 23;
    t1.salary = 23000;

    s1.getinfo();
    t1.getinfo();
}