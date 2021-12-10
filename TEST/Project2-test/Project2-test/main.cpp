#include<iostream>
#include<vector>
using namespace std;
int main() {
	//vector<string> v0(20);
	//vector<string> v1(10, "test");
	//vector<string> v2{ "a","b","c","d" };
	//vector<int>v3(5);
	////cout << "v1容器的容量大小为:"<<v1.capacity() << endl;
	////cout << "v1容器实际元素数量为:"<<v1.size() << endl;
	////cout << v2[0] << endl; cout << v2.at(2) << endl;//获取容器中的数据
	//v1[0] = "hello";
	////v0.assign(10,"hello");
	//v3.assign(0, 11);
	//cout << v3.size() << endl;
	//for (int i = 0; i < v3.size(); i++) {//输出v0
	//	cout << v3.at(i)<<"\t";
	//}
	////cout << endl;
	////cout << v1.at(0) << endl;
	vector<int>v1{ 1,2,3,4,5,6,7,8,9 };
	vector<int>v2;
	v2.assign(v1.begin(), v1.end()-1);//1 2 3 4 5 6 7 8 
	v2.pop_back(); v2.push_back(99);//1 2 3 4 5 6 7 99
	v2.insert(v2.begin() + 1, 666);//1 666 2 3 4 5 6 7 99
	v2.insert(v2.begin() + 1, 3, 2333);//1 2333 2333 2333 666 2 3 4 5 6 7 99
	v2.insert(v2.begin() + 2, v1.begin(), v1.end() - 3);// 1 2333 1 2 3 4 5 6 2333 2333 666 2 3 4 5 6 7 99
	v2.erase(v2.begin()); //remove 1
	v2.erase(v2.begin(), v2.end() - 1);



	//for (int i : v2) {
	//	cout << i<<"\t";
	//}
	vector<int> ::iterator pos;
	for (pos = v2.begin(); pos != v2.end(); pos++) {
		cout << *pos << endl;
	}
	vector<int>::reverse_iterator rpos;
	for (rpos = v2.rbegin(); rpos != v2.rend(); rpos++) {
		cout << *rpos << endl;
	}
	cout <<endl<< "v2头:"<<v2.front()<<"\tv2尾:"<<v2.back()<<endl;
	
}