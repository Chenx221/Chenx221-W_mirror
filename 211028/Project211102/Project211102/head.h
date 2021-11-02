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
		name = "δ����";
	}
	Pp(string name) {
		this->name = name;
	}
	void getInfo() {
		cout << "����:" << name << endl;
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
		cout <<"ID: "<<id<<" ����" << n << "Բ" << endl;
		money += n;
	}
	void reduceM(string id, float n) {
		cout << "ID: " << id << " ����" << n << "Ԫ" << endl;
		if ((money - n) < 0)
			cout << "ERROR, ûǮ��" << endl;
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
		cout << "ѧ������:" << getName() << "\tѧ��:" << getId() << "\t���:" << getMoney() << endl;
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
		cout << "��ʦ����:" << getName() << "\tѧ��:" << getId() << "\t���:" << getMoney() << endl;
	}
};

#endif HEAD_H