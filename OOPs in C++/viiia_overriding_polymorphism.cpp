#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override { // Overriding the base class method
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Animal* a; Dog d; a = &d;
    Animal* a = new Dog();

    a->sound(); // Runtime polymorphism, calls Dog's sound()
}
