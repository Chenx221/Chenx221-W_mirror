#include<iostream>
using namespace std;
class people {
public:
	virtual ~people();
	void say() {
		cout << "hello world p" << endl;
	}
};
people::~people() {
	cout << "people~" <<endl;
}
class student :public people {
public:
	void say() {
		cout << "hello world s" << endl;
	}
	~student() {
		cout << "student ~" << endl;
	}
};
int main() {
	student s1;
	s1.say();
	people* p1 = new student();
	p1->say();
	delete p1;
	cout << endl;
	return 0;

}

