#include<iostream>
using namespace std;

class student {
public:
	const int id=123;
	void setinfo(int a, string b) const{
	}
private:
	string address;
	int age;
};

int main() {
	student s1;
	s1.setinfo(1, "b");
}