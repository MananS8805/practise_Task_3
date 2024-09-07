#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Inline member function to calculate and return the area
    double getArea() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Create an object of Circle with a radius of 5.0
    Circle myCircle(5.0);

    // Calculate and display the area of the circle
    cout << "The area of the circle with radius " << 5.0 << " is " << myCircle.getArea() << endl;

    return 0;
}
