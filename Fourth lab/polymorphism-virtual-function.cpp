#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual ~Shape() {}
    virtual double area() const = 0;
};
class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}
    double area() const override {
        return M_PI * radius * radius;
    }
private:
    double radius;
};
class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : width(width), height(height) {}
    double area() const override {
        return width * height;
    }
private:
    double width;
    double height;
};
void displayArea(const Shape& shape) {
    cout << "The area of the shape is: " << shape.area() << endl;
}
int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    displayArea(circle);
    displayArea(rectangle);
    return 0;
}
