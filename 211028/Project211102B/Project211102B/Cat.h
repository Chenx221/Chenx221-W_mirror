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
		cout << "è����è��" << endl;
	}
	void shoot() {
		cout << "è�ڽ�" << endl;
	}
private:
	string id;
};
#endif