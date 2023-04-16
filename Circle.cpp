#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Circle {
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    // Getter method for radius
    double getRadius() const {
        return radius;
    }

    // Calculate and return the area of the circle
    double area() const {
        return M_PI * radius * radius;
    }

    // Calculate and return the perimeter of the circle
    double perimeter() const {
        return 2 * M_PI * radius;
    }

    // Calculate and return the diameter of the circle
    double diameter() const {
        return 2 * radius;
    }
};

// Function to create a linearly spaced vector of Circle objects
vector<Circle> linear_space(double start, double end, int num, double radius) {
    vector<Circle> circles;
    double step = (end - start) / (num - 1);

    for (int i = 0; i < num; i++) {
        double r = radius + i * step;
        Circle circle(r);
        circles.push_back(circle);
    }

    return circles;
}

int main() {
    // Example usage of linear_space function
    vector<Circle> circles = linear_space(1.0, 3.0, 5, 0.5);

    // Print the properties of each circle in the vector
    for (int i = 0; i < circles.size(); i++) {
        Circle circle = circles[i];
        cout << "Circle " << i+1 << ":\n";
        cout << "Radius: " << circle.getRadius() << "\n";
        cout << "Area: " << circle.area() << "\n";
        cout << "Perimeter: " << circle.perimeter() << "\n";
        cout << "Diameter: " << circle.diameter() << "\n\n";
    }

    return 0;
}
