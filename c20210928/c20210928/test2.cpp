#include<iostream>
using namespace std;
class sample
{
public:
	sample(int val);  //¢Ù     
	~sample();      //¢Ú   
private:
	int a = 2;       //¢Û   
}
;
int main() {
	sample s1(1);
	return 0;
}