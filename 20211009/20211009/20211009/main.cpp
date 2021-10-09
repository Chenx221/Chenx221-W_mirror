#include<iostream>
using namespace std;
class student {
public:
	student() {
		name = "ÎŞÃû";
		id = 10001;
		age = 18;
	}
	student(string a, int b, int c) : name(a), id(b), age(c) {}
	void getinfo() {
		cout << "name:" << name << "\tid:" << id << "\tage:" << age << endl;
	}
	void setinfo(string a,int b,int c) {
		this->name = a;
		this->id = b;
		this->age = c;
	}
	~student() {
		cout << "..." <<this->name<< endl;
	}
private:
	string name;
	int id;
	int age;
};
int main() {
	student s1,s2("test",10003,20);
	s1.getinfo();
	s1.setinfo("unknown", 10002, 19);
	s1.getinfo();
	s2.getinfo();
}