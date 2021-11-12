#include<iostream>
using namespace std;
class A {
public:
	~A()
	{
		cout << "test1";
	}
};

class C : public A {
public:
	C() {
		cout << "test";
	}
	~C()
	{
		cout << "test2";
	}
};

int main() {
	C obj;
	return 0;
}