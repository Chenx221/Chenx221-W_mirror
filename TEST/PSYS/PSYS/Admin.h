#ifndef ADMIN_H
#define ADMIN_H
#include"Car.h"
class Admin :public User {
public:
	void Manager() {
		char type_char;
		cin >> type_char;
		while (1) {
			if (type_char == '1') {

			}
			else if (type_char == '2') {

			}
			else if (type_char == '3') {

			}
			else if (type_char == '4') {
				
			}
			else if (type_char == '5') {
				
			}
			else if (type_char == '6') {
				
			}
			else if (type_char == '7') {
				return;
			}
			else {
				cout << "非法字符，请检查输入内容" << endl;
			}
			cin >> type_char;
		}
	}






};
#endif // !ADMIN_H
