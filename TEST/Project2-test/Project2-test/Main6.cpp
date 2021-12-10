#include<iostream>
using namespace std;
class A
{
public:
	virtual void f1() { cout << 1; };
	void f2() { cout << 2; };
};
class B : public A
{
public:
	void f1() { cout << 3; }
	void f2() { cout << 4; }
};
int main() {
	B b;
	A* p;
	p = &b; 
	p->f1();
	p->f2();
}