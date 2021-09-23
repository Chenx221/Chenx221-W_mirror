#include<iostream>
using namespace std;
class student {
private:
	string name;
	int age;
	int id;
	int score;
public:
	string getname();
	int getage();
	int getid();
	int getscore();
	void setupinfo(string a1, int a2, int a3, int a4);
};
void student::setupinfo(string a1, int a2, int a3, int a4) {
	name = a1;
	age = a2;
	id = a3;
	score = a4;
}
string student::getname() {
	return name;
}
int student::getage() {
	return age;
}
int student::getid() {
	return id;
}
int student::getscore() {
	return score;
}

//void main() {
//	student *s= new student[100];
//	s[0].setupinfo("unknown", 18, 1, 100);
//	cout << s[0].getname() << " "<<s[0].getage() << " " << s[0].getid() << " " << s[0].getscore() << endl;
//}