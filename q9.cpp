#include <iostream>
using namespace std;

class Area {
public:
    // Function to calculate the area of a circle
    double calculateArea(double radius) const {
        return 3.14159 * radius * radius;
    }

    // Function to calculate the area of a square
    double calculateArea(double side, bool isSquare) const {
        if (isSquare) {
            return side * side;
        }
        return 0; // Not used for circle
    }

    // Function to calculate the area of a rectangle
    double calculateArea(double width, double height) const {
        return width * height;
    }

    // Function to calculate the area of a triangle
    double calculateArea(double base, double height, bool isTriangle) const {
        if (isTriangle) {
            return 0.5 * base * height;
        }
        return 0; // Not used for other shapes
    }
};

int main() {
    Area a;

    double circleRadius = 7.0;
    double squareSide = 4.0;
    double rectangleWidth = 5.0;
    double rectangleHeight = 6.0;
    double triangleBase = 3.0;
    double triangleHeight = 4.0;

    cout << "Area of circle: " << a.calculateArea(circleRadius) << endl;
    cout << "Area of square: " << a.calculateArea(squareSide, true) << endl;
    cout << "Area of rectangle: " << a.calculateArea(rectangleWidth, rectangleHeight) << endl;
    cout << "Area of triangle: " << a.calculateArea(triangleBase, triangleHeight, true) << endl;

    return 0;
}
