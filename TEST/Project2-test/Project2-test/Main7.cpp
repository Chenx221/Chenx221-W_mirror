//vector 
#include<iostream>
#include<vector>//��Ҫ������ͷ�ļ�
using namespace std;
int main() {
	vector<int> v1(100);//����vector����
	vector<int> v2(20, 1);//������СΪ20����ʼֵΪ1��vector����
	vector<int> v3{ 1,2,3,4,5,6,7,8,9 };//����ָ������ָ����С��vector����
	vector<int> v4(v1);//��v1��ʼ��v4
	vector<int> v5 = v3;
	//vector<string> v6 = v1; Ҫ��������ͬ
	cout << "v1������Ϊ:" << v1.capacity() << "\nv1��ʵ��ʹ����Ϊ:" << v1.size()<<endl;
	cout << "v2�ĵ�0��Ԫ��Ϊ" << v2[0]<<endl;
	cout << "v3�ĵ�3��Ԫ��Ϊ" << v3.at(2) << endl;
	//v1.assign(3, 666);
	//v1.assign(0, 10);//���
	vector<int>::iterator pos;
	cout << "v1��ͷ��Ԫ��Ϊ:" << v1.front() << "v1��β��Ԫ��Ϊ:" << v1.back()<<endl;
	v1.pop_back(); v1.push_back(99);
	cout << "v1��β��Ԫ��Ϊ:" << v1.back() << endl;
	for (pos = v1.begin(); pos != v1.end(); pos++) cout << *pos << " ";
	cout << endl;
	v1.erase(v1.begin(), v1.end() - 49);
	for (pos = v1.begin(); pos != v1.end(); pos++) cout << *pos << " ";
	v1.insert(v1.begin(), 1);
	v1.insert(v1.begin() + 1, 3, 2);
	for (pos = v1.begin(); pos != v1.end(); pos++) cout << *pos << " ";

}