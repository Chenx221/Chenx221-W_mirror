#include<iostream>
using namespace std;
template<typename Tp>
Tp add(Tp a, Tp b) {
	return a + b;
}
template int add<int>(int t1, int t2);
//int main() {
//	cout << add<double>(1, 'B') << endl;
//	cout << add(1.5, 2.6) << endl;
//}