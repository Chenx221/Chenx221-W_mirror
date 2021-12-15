#include<iostream>
#include<forward_list>
using namespace std;
int main() {
	forward_list<int> fl1(100);
	//不支持insert和erase插入和删除
	forward_list<int>::iterator pos;

	cout << endl;
	fl1.insert_after(fl1.before_begin(), {1,2,3,4,5});
	for (pos = fl1.begin(); pos != fl1.end(); pos++) {
			cout << *pos << " ";
	}
	//fl1.erase_after(fl1.end());

}