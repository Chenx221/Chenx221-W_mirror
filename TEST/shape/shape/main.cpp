//P94 ������κ�Բ��������ܳ�
#include<iostream>
#include"shape.h"
using namespace std;
int main() {
	Rectangle r1(2, 4);
	Circle c1(10);
	cout << "���ε����Ϊ:" << r1.getArea() << "\t�ܳ�Ϊ:" << r1.getLen() << endl;
	cout << "Բ�����Ϊ:" << c1.getArea() << "\t�ܳ�Ϊ:" << c1.getLen() << endl;
	return 0;
}