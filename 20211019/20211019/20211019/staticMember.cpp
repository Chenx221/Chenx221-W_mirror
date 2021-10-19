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
	Student stu1("����");
	Student stu2("����");
	cout << "������:" << stu1._sum << endl;
	cout << "������:" << stu2._sum << endl;
	cout << "������:" << Student::_sum << endl;
	cout << "stu1�Ĵ�С��:" << sizeof(stu1) << endl;
	cout << "string:" << sizeof(string) << "\tint:" << sizeof(int);
	return 0;
}