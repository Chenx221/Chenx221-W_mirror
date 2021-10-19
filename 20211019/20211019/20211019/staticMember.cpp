//From P36
#include<iostream>
using namespace std;
class Student {
public:
	Student(string name);
	~Student();
	static int _sum;
private:
	string _name;
};
Student::Student(string name) {
	this->_name = name;
	_sum++;
}
Student::~Student() {

}
int Student::_sum = 0;
int main() {
	Student stu1("张三");
	Student stu2("李四");
	cout << "人数是:" << stu1._sum << endl;
	cout << "人数是:" << stu2._sum << endl;
	cout << "人数是:" << Student::_sum << endl;
	cout << "stu1的大小是:" << sizeof(stu1) << endl;
	cout << "string:" << sizeof(string) << "\tint:" << sizeof(int);
	return 0;
}