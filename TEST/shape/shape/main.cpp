//P94 计算矩形和圆的面积与周长
#include<iostream>
#include"shape.h"
using namespace std;
int main() {
	Rectangle r1(2, 4);
	Circle c1(10);
	cout << "矩形的面积为:" << r1.getArea() << "\t周长为:" << r1.getLen() << endl;
	cout << "圆的面积为:" << c1.getArea() << "\t周长为:" << c1.getLen() << endl;
	return 0;
}