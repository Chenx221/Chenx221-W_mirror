//P94 计算矩形和圆的面积与周长
#include<iostream>
#include"shape.h"
using namespace std;
int main() {
	double d1, d2, d3; cin >> d1 >> d2 >> d3;
	Shape* r3 = new Rectangle(d1, d2);
	Shape* c3 = new Circle(d3);
	cout << "矩形的面积为:" << r3->getArea() << "\t周长为:" << r3->getLen() << endl;
	cout << "圆的面积为:" << c3->getArea() << "\t周长为:" << c3->getLen() << endl;

	Shape* r2 = new Rectangle(2, 4);
	Shape* c2 = new Circle(10);
	Rectangle r1(2, 4);
	Circle c1(10);
	cout << "矩形的面积为:" <<r2->getArea() << "\t周长为:" << r2->getLen() << endl;
	cout << "圆的面积为:" << c2->getArea() << "\t周长为:" << c2->getLen() << endl;
	cout << "矩形的面积为:" << r1.getArea() << "\t周长为:" << r1.getLen() << endl;
	cout << "圆的面积为:" << c1.getArea() << "\t周长为:" << c1.getLen() << endl;
	return 0;
}