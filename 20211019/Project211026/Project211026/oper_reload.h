#ifndef OPER_RELOAD_H
#define OPER_RELOAD_H
using namespace std;
class A {
private:
	int _x;
	int _y;
public:
	A(int x = 0, int y = 0) :_x(x), _y(y) {
	}
	void show() const;
	A operator+ (const A& a) const;
	friend A operator - (const A& a, const A& b) {
		A af;
		af._x = a._x - b._x;
		af._y = a._y - b._y;
		return af;
	}
	friend bool operator> (const A& a, const A& b) {
		return (a._x != b._x) ? (a._x > b._x): (a._y > b._y);
	}
};
void A::show() const {
	cout << "test" <<_x<<"test"<<_y << endl;
}
A A::operator + (const A& a) const {
	return A(_x + a._x, _y + a._y);
}


#endif