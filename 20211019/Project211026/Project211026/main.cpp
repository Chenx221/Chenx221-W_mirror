#include<iostream>
#include"oper_reload.h"
using namespace std;

int main() {
	A a1;
	A a2(2, 4);
	A a3(6, 4);
	a1=a1 + a2;
	a1.show();
	a2.show();
	a1 =operator-(a3,a1) ;
	a1.show();
	a1 = a1.operator+(a3);
	a1.show();
	a2.show();
	cout << (a1 > a2) << endl;
	A a4(1, 1), a5(2, 2), a6(1, 3);
	cout << (a4 > a5) << " " << (a4 > a6) << endl;
}