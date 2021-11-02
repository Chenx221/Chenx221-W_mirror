#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;
class Animal {
public:
	Animal() {

	}
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	void shoot() {
		cout <<name<< "¶¯ÎïÔÚ½Ð" << endl;
	}
private:
	string name;
};
#endif
