#include<iostream>
#include<string>
using namespace std;
class Student {
public:
	string name;
	string id;
	string sex;
	int score;
	int age;
public:
	Student() {};
	Student(string n, string i, string s, int sc, int a) {
		name = n; id = i; sex = s; score = sc; age = a;
	}
	void getinfo() {
		cout << "name" + name + "id" + id + "sex" + sex + "score" + to_string(score) + "age" + to_string(age);
	}
};
class s1_Student :public Student {
public :
	string other;
public:
	s1_Student(string n, string i, string s, int sc, int a,string o) {
		name = n; id = i; sex = s; score = sc; age = a;
		other = o;
	}
	void getinfo() {
		Student::getinfo(); cout << "other" << other << endl;
	}
};

int main() {
	s1_Student s1("unknown", "001", "1", 100, 18,"no");
	s1.getinfo();
}

