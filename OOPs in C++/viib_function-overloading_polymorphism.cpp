#include <iostream>
#include <string>
using namespace std;

class Calculator{
public:
    // Eg. Overloading based on number of parameters
    int sum(int a, int b){
        return a+b;
    }
    int sum(int a, int b, int c){
        return a+b+c;
    }
    double sum(double a, double b, double c){
        return a+b+c;
    }

    // Eg. Overloading based on type of parameters
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double d) {
        cout << "Double: " << d << endl;
    }

    void display(string s) {
        cout << "String: " << s << endl;
    }

    // Eg. Overloading with default arguments
    void greet(string name, string title = "Mr./Ms.") {
        cout << "Hello " << title << " " << name << "!" << endl;
    }
};

int main(){
    Calculator calc;

    calc.greet("Alice");
    calc.greet("Anu", "Dr.");

    cout<<calc.sum(1,2)<<endl;                 // calls sum(int a, int b)
    cout<<calc.sum(1,2,3)<<endl;               // calls sum(int a, int b, int c)
    cout<<calc.sum(1234123,1232211,0)<<endl;   // calls sum(int a, int b, int c)
    cout<<calc.sum(2.3,23.1,7.8)<<endl;        // calls sum(double a, double b, double c)

    calc.display(1);
    calc.display(1.2);
    calc.display("sum");
}