#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;
class Animal{
private:
	string name;
public:
	Animal() {}
	Animal(string n) {
		name = n;
	}
	void setname(string n){
		name = n;
	}
	string getname() {
		return name;
	}
	void shoot() {
		cout << "¶¯Îï»á½Ð" << endl;
	}
};





#endif