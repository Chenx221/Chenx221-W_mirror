#pragma once
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
class Student {
public:
	void study() {
		cout << name << "学生学习" << endl;
	}
	void exam() {
		cout << name << "学生挂科" << endl;
	}
	void setName(string name) {
		this->name = name;
	} 
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
private:
	string name;
	int age;
};
#endif

