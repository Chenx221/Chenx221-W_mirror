#ifndef HEAD_H
#define HEAD_H
using namespace std;
class Pp {
private:
	string name;
public:
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	Pp() {
		name = "未定义";
	}
	Pp(string name) {
		this->name = name;
	}
	void getInfo() {
		cout << "姓名:" << name << endl;
	}
};

class Balance {
private:
	float money;
public:
	void setMoney(float m) {
		this->money = m;
	}
	float getMoney() {
		return money;
	}
	void addM(string id,float n) {
		cout <<"ID: "<<id<<" 收入" << n << "圆" << endl;
		money += n;
	}
	void reduceM(string id, float n) {
		cout << "ID: " << id << " 花费" << n << "元" << endl;
		if ((money - n) < 0)
			cout << "ERROR, 没钱了" << endl;
		else
			money -= n;
	}
};

class Student : public Pp, public Balance {
private:
	string id;
public:
	string getId() {
		return id;
	}
	string setId(string id) {
		this->id = id;
	}
	Student() { //init
		Pp();
		id = "0000";
		setMoney(100.0f);
	}
	Student(string name, string id) { //init
		//Pp(name);
		setName(name);
		this->id = id;
		setMoney(100.0f);
	}
	void getInfo() {
		cout << "学生姓名:" << getName() << "\t学号:" << getId() << "\t余额:" << getMoney() << endl;
	}
};

class Teacher : public Pp, public Balance {
private:
	string id;
public:
	string getId() {
		return id;
	}
	string setId(string id) {
		this->id = id;
	}

	Teacher() { //init
		Pp();
		id = "0000";
		setMoney(1000.0f);
	}
	Teacher(string name, string id) { //init
		//Pp(name);
		setName(name);
		this->id = id;
		setMoney(1000.0f);
	}
	void getInfo() {
		cout << "教师姓名:" << getName() << "\t学号:" << getId() << "\t余额:" << getMoney() << endl;
	}
};

#endif HEAD_H