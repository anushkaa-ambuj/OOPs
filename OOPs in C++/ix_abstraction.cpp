#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Concrete function
    void info() {
        cout << "This is a shape." << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();   // Calls Circle's draw()
    s->info();   // Calls base class function
    delete s;
    return 0;
}
