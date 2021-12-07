#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> list1(10);
	list1.assign(5, 999);
	list1.push_back(111);
	list1.push_front(222);
	list<int>::iterator pos; list1.remove(999);
	for (pos = list1.begin(); pos != list1.end(); pos++) {
		cout << *pos;
	}

}