#include<iostream>
using namespace std;
template <typename T >
void func(T x,T y) {
	return x + y;
};
int main() {
	func(1, 2);
}