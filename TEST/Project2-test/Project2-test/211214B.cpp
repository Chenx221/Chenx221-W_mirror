//list
#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> l1;//空的list容器
	list<int> l2(100);//在上一条的基础上设定大小为100
	list<int> l3(5, 1);
	list<int> l4(l2);
	list<int>l5{ 1,2,3,4,5,6,7,8,9,0 };
	//支持assign赋值
	//迭代遍历l5
	list<int>::iterator pos;
	for (pos = l5.begin(); pos != l5.end(); pos++) {
		cout << *pos << " ";
	}
	cout << endl;
	//支持push_back push_front (向头尾插入元素)
	//支持insert插入
	//支持pop_back pop_front（删除头尾）
	//支持erase删除
}