#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream ofs("file.txt", ios::out);
	if (!ofs) {
		cout << "打开失败" << endl;
		exit(666);
	}
	cout << "请输入" << endl;
	char data[1024] = { 0 };
	cin >> data;
	ofs << data;
	ofs.close();
	ifstream ifs("file.txt", ios::in);
	if (!ifs) {
		cout << "打开失败" << endl;
		exit(999);
	}
	char buf[1024] = { 0 };
	ifs >>buf ;
	cout << buf << endl;
	ifs.close();
	return 0;


}