#include<iostream>

using namespace std;
//void add(int a, int b, int c) {
//	cout << a + b + c << endl;
//}
//void add(int a) {
//	cout << a<< endl;
//}
//void add(int a, int b) {
//	cout << a + b<< endl;
//}
//void doadd5(int& a) {
//	a += 1;
//	cout << a << "   " << &a << endl;
//}
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b; b = temp;
//}
bool islonger(string& s1, string& s2) {
	return s1 .size()> s2.size();
}
int main() {
	//add(1);
	//add(1, 2);
	//add(1, 2, 3);
	//int a = 10, b = 20;
	//cout << "a=" << a << endl << "b=" << b << endl;
	//swap(a, b);
	//cout << "a=" << a << endl << "b=" << b << endl;
	string ss1 = "abcdefg", ss2 = "abcdegfh";
	cout << islonger(ss1, ss2) << endl;
	system("pause");
	return 0;
}