#include<iostream>
using namespace std;
class A {
private:
	int _x;
	int _y;
public:
	A(int x, int y) {
		_x = x;
		_y = y;
	}
	friend ostream& operator<<(ostream& os, const A& a) {
		os << "[" << a._x << "," << a._y << "]" ;
		return os;
	}
	friend istream& operator>>(istream& is, A& a) {
		is >> a._x >> a._y;
		return is;
	}
};
int main() {
	A a1(1, 2);
	cout << "a1:" << a1 << endl;
	cout << "type:" << endl;
	cin >> a1;
	cout << "a1" << a1 << endl;
	return 0;
}