#ifndef SHAPE_H
#define SHAPE_H
#define PI 3.1415926
#include<cmath>
class Shape {
public:
	double getArea() {}
	double genLen() {}
};

class Rectangle : public Shape {
public:
	double getArea() {
		return length * width;
	}
	double getLen() {
		return (length + width) * 2;
	}
	Rectangle(double l, double w) {
		length = l;
		width = w;
	}
	Rectangle() {
		length = 0;
		width = 0;
	}
	void setLength(double l) {
		length = l;
	}
	void setWidth(double w) {
		width = w;
	}
private:
	double length;
	double width;
};

class Circle :public Shape {
public:
	double getArea() {
		return PI * pow(radius, 2);
	}
	double getLen() {
		return PI * 2 * radius;
	}
	Circle(double r) {
		radius = r;
	}
	Circle() {
		radius = 0;
	}
	void setRadius(double r) {
		radius = r;
	}
private:
	double radius;
};

#endif