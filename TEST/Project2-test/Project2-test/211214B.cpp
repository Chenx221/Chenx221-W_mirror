//list
#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> l1;//�յ�list����
	list<int> l2(100);//����һ���Ļ������趨��СΪ100
	list<int> l3(5, 1);
	list<int> l4(l2);
	list<int>l5{ 1,2,3,4,5,6,7,8,9,0 };
	//֧��assign��ֵ
	//��������l5
	list<int>::iterator pos;
	for (pos = l5.begin(); pos != l5.end(); pos++) {
		cout << *pos << " ";
	}
	cout << endl;
	//֧��push_back push_front (��ͷβ����Ԫ��)
	//֧��insert����
	//֧��pop_back pop_front��ɾ��ͷβ��
	//֧��eraseɾ��
}