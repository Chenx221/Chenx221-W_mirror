#include<iostream>
using namespace std;
class sample
{
public:
	sample(int val);  //��     
	~sample();      //��   
private:
	int a = 2;       //��   
}
;
int main() {
	sample s1(1);
	return 0;
}