#ifndef RABBIT_H
#define RABBIT_H
#include<string>
using namespace std;
class Rabbit {
public:
	Rabbit(string name, string pf) {
		_name = name;
		_food = pf;
	}
	void eat() {
		cout << _name << " eat " << _food << endl;
	}
	/*~Rabbit() {
		if (_food != NULL)
			delete[]_food;
	}*/
private:
	string _name;
	string  _food;
};
#endif