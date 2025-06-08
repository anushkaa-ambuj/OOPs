#include <iostream>
#include <string>
using namespace std;

class Student{ // class
private:
    char grade;

    void updateGradetoA(){
        grade = 'A';
    }

public:
    string name;  // properties
    int age;
    int roll;

    // setter function
    void setGrade(char newGrad){
        grade = newGrad;
    }

    // getter func
    char getGrade(){
        return grade;
    }
};

int main(){
    Student s1; //object

    s1.name = "Jack";
    s1.age = 12;
    s1.roll = 1234;

    s1.setGrade('A');
    cout<<"Garde: "<<s1.getGrade();
}