#include <iostream>
#include <string>
using namespace std;

class Student{ //teacher1 class
public:
    string name;
    int age;
    int roll;

    void getinfo(){  
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

class Teacher{ //teacher2 class
public:
    string subject;
    double salary;

    void getinfo(){  
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
 
class TA: public Student, public Teacher{  //child class
public:
    void getinfo(){  
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    TA t1;
    t1.name = "Clara";
    t1.age = 23;
    t1.subject = "CS";
    t1.getinfo();
}