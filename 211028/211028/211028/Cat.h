#ifndef CAT_H
#define CAT_H
#include"Animal.h"
using namespace std;
class Cat :public Animal {
private:
	string id;
public:
	//Cat() {
	//	super();
	//}
	Cat(string n, string id) {
		Animal(n);
		this->id = id;
	}
};
#endif