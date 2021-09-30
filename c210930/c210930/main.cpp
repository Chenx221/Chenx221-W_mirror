#include<iostream>
using namespace std;
class Student {
private:
	string name;
public:
	Student() {
		name = "unknown";
	}
	Student(string n) {
		name = n;
	}
	string getname() {
		return name;
	}
};
int main() {
	Student s("ÀÏÍõ");
	cout << s.getname() << endl;




	return 0;
}