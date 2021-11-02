#ifndef CAT_H
#define CAT_H
using namespace std;
class Cat : public Animal {
public:
	void setId(string i) {
		id = i;
	}
	string getId() {
		return id;			

	}
	void run() {
		cout << "猫会走猫步" << endl;
	}
	void shoot() {
		cout << "猫在叫" << endl;
	}
private:
	string id;
};
#endif