/*class practice
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class Figure {
public:
    virtual double getSquare() = 0;
    virtual double getPerimeter() = 0;
    virtual string getType() = 0;
};

class Rectangle : public Figure {
public:
    Rectangle(int width, int height);
    double getSquare() override;
    double getPerimeter() override;
    string getType() override;
protected:
    int width, height;
private:
    const string type = "Rectangle";
};

class Circle : public Figure {
public:
    explicit Circle(int r);
    double getSquare() override;
    double getPerimeter() override;
    string getType() override;
protected:
    int r;
private:
    const string type = "Circle";
};

Rectangle::Rectangle(int width, int height) {
    this->width = width;
    this->height = height;
}

double Rectangle::getSquare() {
    return width * height;
}

double Rectangle::getPerimeter() {
    return 2 * (height + width);
}

string Rectangle::getType() {
    return type;
}

Circle::Circle(int r) {
    this->r = r;
}

double Circle::getSquare() {
    return M_PI * r * r;
}

double Circle::getPerimeter() {
    return 2 * M_PI * r;
}

string Circle::getType() {
    return type;
}

int main(){
    Rectangle r1(1, 2);
    Rectangle r2(2, 5);
    Circle c1(1);
    Circle c2(2);
    vector<Figure*> f(4);
    f[0] = &r1;
    f[1] = &r2;
    f[2] = &c1;
    f[3] = &c2;
    for (auto now : f) {
        cout << "I am a " << now->getType() << ". My square is " << now->getSquare() << ". My perimeter is " << now->getPerimeter() << endl;
    }
    return 0;
}