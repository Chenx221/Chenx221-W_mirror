#include<iostream>
using namespace std;
template<typename Tp>
Tp add(Tp a, Tp b) {
	return a + b;
}
template int add<int>(int t1, int t2);
int main() {
	cout << add<int>(1, 'B') << endl;
	cout << add('a', 'b') << endl;
	cout << add(1.5, 2.6) << endl;
	return 0;
}