#include<iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, int> m;
	for (int i = 1; i <= 9; i++) {
		m.insert(pair<string, int>("test" + std::to_string(i), i));
	}
	map<string, int>::iterator pos;
	for (pos = m.begin(); pos != m.end(); pos++) {
		cout << pos->first << " " << pos->second << endl;
	}

}
