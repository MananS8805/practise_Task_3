#include <iostream>
#include <cmath>
using namespace std;

class Volume {
public:
    // Function to calculate the volume of a cube
    double calculateVolume(double side) const {
        return pow(side, 3);
    }

    // Function to calculate the volume of a sphere
    double calculateVolume(double radius, bool isSphere) const {
        if (isSphere) {
            return (4.0 / 3.0) * 3.14159 * pow(radius, 3);
        }
        return 0; // Not used for cube
    }

    // Function to calculate the volume of a cylinder
    double calculateVolume(double radius, double height) const {
        return 3.14159 * pow(radius, 2) * height;
    }
};

int main() {
    Volume v;
    
    double cubeSide = 3.0;
    double sphereRadius = 4.0;
    double cylinderRadius = 5.0;
    double cylinderHeight = 10.0;

    cout << "Volume of cube: " << v.calculateVolume(cubeSide) << endl;
    cout << "Volume of sphere: " << v.calculateVolume(sphereRadius, true) << endl;
    cout << "Volume of cylinder: " << v.calculateVolume(cylinderRadius, cylinderHeight) << endl;

    return 0;
}
