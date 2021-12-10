#include<iostream>
#include <set>

using namespace std;
int main() {
	set<int> s;//升序
	set <int, greater<int>> x;//降序
	s.insert(123);
	s.insert(666);
	s.insert(233);
	s.insert(1);
	x.insert(123);
	x.insert(666);
	x.insert(233);
	x.insert(1);
	cout<<s.size()<<endl;
	cout<<s.max_size()<<endl;
	set<int> ::iterator pos;
	for (pos = x.begin(); pos != x.end(); pos++) {
		cout << *pos<<endl;
	}

}