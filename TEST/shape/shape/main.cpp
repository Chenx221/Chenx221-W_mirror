//P94 ������κ�Բ��������ܳ�
#include<iostream>
#include"shape.h"
using namespace std;
int main() {
	double d1, d2, d3; cin >> d1 >> d2 >> d3;
	Shape* r3 = new Rectangle(d1, d2);
	Shape* c3 = new Circle(d3);
	cout << "���ε����Ϊ:" << r3->getArea() << "\t�ܳ�Ϊ:" << r3->getLen() << endl;
	cout << "Բ�����Ϊ:" << c3->getArea() << "\t�ܳ�Ϊ:" << c3->getLen() << endl;

	Shape* r2 = new Rectangle(2, 4);
	Shape* c2 = new Circle(10);
	Rectangle r1(2, 4);
	Circle c1(10);
	cout << "���ε����Ϊ:" <<r2->getArea() << "\t�ܳ�Ϊ:" << r2->getLen() << endl;
	cout << "Բ�����Ϊ:" << c2->getArea() << "\t�ܳ�Ϊ:" << c2->getLen() << endl;
	cout << "���ε����Ϊ:" << r1.getArea() << "\t�ܳ�Ϊ:" << r1.getLen() << endl;
	cout << "Բ�����Ϊ:" << c1.getArea() << "\t�ܳ�Ϊ:" << c1.getLen() << endl;
	return 0;
}