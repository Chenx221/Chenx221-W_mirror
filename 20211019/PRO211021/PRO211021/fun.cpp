#include<iostream>
#include<vector>
#include<string>
using namespace std;
class test {
private:
	int a=1;
	int b=2;
public:
	int operator+ (test& t1) {
		return t1.a-t1.b;
	}
};

int main() {
	test t1;
	cout << t1+t1 ;
}