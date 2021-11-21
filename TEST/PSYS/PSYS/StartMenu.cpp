#include<iostream>
#include"User.h"
#include"Admin.h"
using namespace std;
int main() {
	User u;
	Admin a;
	char type_char;
	cin >> type_char;
	while (1) {
		if (type_char=='1') {
			u.checkCar();
		}
		else if(type_char == '2') {
			a.checkCar();
		}
		else if(type_char == '3') {
			return 0;
		}
		else {
			cout << "非法字符，请检查输入内容" << endl;
		}
		cin >> type_char;
	}
}