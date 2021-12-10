#include<iostream>
#include<array>
using namespace std;
int main() {
	array<int, 10>arr1;
	array<int, 10>arr2 = { 0,1,2,3,4,5,6,7,8,9 };
	arr1.fill(1);
	for (int i : arr1) {
		cout << i << " ";
	}
	cout << endl;
	arr1.swap(arr2);//交换时要求大小相同
	for (int i : arr1) {
		cout << i << " ";
	}
}