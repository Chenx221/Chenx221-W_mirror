#ifndef USER_H
#define USER_H
#include"Car.h"
class User {
public:
	void checkCar(){
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
				return;
			}
			else {
				cout << "非法字符，请检查输入内容" << endl;
			}
			cin >> type_char;
		}
	}




};
#endif