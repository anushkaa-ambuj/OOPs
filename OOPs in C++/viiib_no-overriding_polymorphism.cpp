#include <iostream>
using namespace std;

class Animal {
public:
    void sound() { // Not virtual
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() { // Hides base class method
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a = new Dog();

    a->sound(); // Calls Animal's version, not Dog's
}
