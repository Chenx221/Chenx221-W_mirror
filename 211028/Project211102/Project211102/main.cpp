#include<iostream>
#include"head.h"
using namespace std;
int main() {
	Pp p1("����1"); p1.getInfo();
	Student s1("����2", "0001"); s1.getInfo();
	s1.reduceM(s1.getId(),99); s1.getInfo();
	Teacher t1("����3", "1001"); t1.getInfo();
	t1.addM(t1.getId(),2000); t1.reduceM(t1.getId(),5000); t1.getInfo();
}