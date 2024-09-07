#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor to initialize the sides
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    // Function to check if the triangle is equilateral
    bool isEquilateral() const {
        return (side1 == side2 && side2 == side3);
    }
    // Function to check if the triangle is isosceles
    bool isIsosceles() const {
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }
    // Function to check if the triangle is scalene
    bool isScalene() const {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }
};

int main() {
    Triangle t1(5.0, 5.0, 5.0); // Equilateral
    Triangle t2(5.0, 5.0, 7.0); // Isosceles
    Triangle t3(5.0, 6.0, 7.0); // Scalene
    cout << "Triangle t1: ";
    cout << (t1.isEquilateral() ? "Equilateral" : (t1.isIsosceles() ? "Isosceles" : "Scalene")) << endl;
    // this evaluates as t1.equliatera if true print "equlitaeral" elseif (isolese else Scalenr)
    // u can say : (is else)
    cout << "Triangle t2: ";
    cout << (t2.isEquilateral() ? "Equilateral" : (t2.isIsosceles() ? "Isosceles" : "Scalene")) << endl;
    cout << "Triangle t3: ";
    cout << (t3.isEquilateral() ? "Equilateral" : (t3.isIsosceles() ? "Isosceles" : "Scalene")) << endl;

    return 0;
}
