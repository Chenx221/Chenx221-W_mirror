#include<iostream>
#include"head.h"
using namespace std;

int main() {
	point p1(0,0), p2(1,1);
	cout<<point::getlen(p1, p2)<<endl;
	cout << sizeof(int) << endl;
	cout << sizeof(p1);
}