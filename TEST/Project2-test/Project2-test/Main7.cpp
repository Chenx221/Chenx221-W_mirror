//vector 
#include<iostream>
#include<vector>//需要包含该头文件
using namespace std;
int main() {
	vector<int> v1(100);//创建vector容器
	vector<int> v2(20, 1);//创建大小为20，初始值为1的vector容器
	vector<int> v3{ 1,2,3,4,5,6,7,8,9 };//创建指定数据指定大小的vector容器
	vector<int> v4(v1);//用v1初始化v4
	vector<int> v5 = v3;
	//vector<string> v6 = v1; 要求类型相同
	cout << "v1的容量为:" << v1.capacity() << "\nv1的实际使用量为:" << v1.size()<<endl;
	cout << "v2的第0个元素为" << v2[0]<<endl;
	cout << "v3的第3个元素为" << v3.at(2) << endl;
	//v1.assign(3, 666);
	//v1.assign(0, 10);//填充
	vector<int>::iterator pos;
	cout << "v1的头部元素为:" << v1.front() << "v1的尾部元素为:" << v1.back()<<endl;
	v1.pop_back(); v1.push_back(99);
	cout << "v1的尾部元素为:" << v1.back() << endl;
	for (pos = v1.begin(); pos != v1.end(); pos++) cout << *pos << " ";
	cout << endl;
	v1.erase(v1.begin(), v1.end() - 49);
	for (pos = v1.begin(); pos != v1.end(); pos++) cout << *pos << " ";
	v1.insert(v1.begin(), 1);
	v1.insert(v1.begin() + 1, 3, 2);
	for (pos = v1.begin(); pos != v1.end(); pos++) cout << *pos << " ";

}