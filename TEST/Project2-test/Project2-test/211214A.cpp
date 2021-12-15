//array
#include<iostream>
#include<array>
using namespace std;
int main() {
	array<int, 100>a1;//定义元素个数为100的array容器
	array<int, 100>a2 = { 1,2,3,4,5,6,7,8,9,10 };//初始化的array容器
	array<int, 100>a3 = { 10,9,8,7,6,5,4,3,2,1 };
	a1.fill(666);
	a2.swap(a3);
	array<int, 100>::iterator pos;
	for (pos = a1.begin(); pos != a1.end(); pos++) cout << *pos << " ";
	cout << endl;
	for (pos = a2.begin(); pos != a2.end(); pos++) cout << *pos << " ";
	cout << endl;
	for (pos = a3.begin(); pos != a3.end(); pos++) cout << *pos << " ";
	cout << endl;
}