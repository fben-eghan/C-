#include <cmath>
#include <memory>
#include <vector>

class Circle {
public:
    Circle(double radius) : radius(radius) {}
    double area() const { return M_PI * radius * radius; }
    double perimeter() const { return 2 * M_PI * radius; }
    double diameter() const { return 2 * radius; }
private:
    double radius;
};

std::vector<std::unique_ptr<Circle>> linear_space(double start, double end, int num, double radius) {
    double step = (end - start) / (num - 1);
    std::vector<std::unique_ptr<Circle>> circles;
    for (int i = 0; i < num; i++) {
        circles.push_back(std::make_unique<Circle>(radius + i * step));
    }
    return circles;
}
