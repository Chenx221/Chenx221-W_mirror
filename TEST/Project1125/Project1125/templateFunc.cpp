#include<iostream>
using namespace std;
int max(const int& a, const int& b) {
	return (a > b) ? a : b;
}
template<typename T>
T max(const T& t1, const T& t2) {
	return (t1 > t2) ? t1 : t2;
}
template<typename T>
T max(const T& t1, const T& t2, const T& t3) {
	return max(max(t1, t2), t3);
}

int main() {
	cout << max(1, 2) << endl;
	cout << max(1, 2, 3) << endl;
	cout << max('a','b') << endl;
	cout << max(6, 3.2) << endl;
}