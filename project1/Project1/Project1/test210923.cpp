#include<iostream>
using namespace std;
class MyTime {
private:
	int hour;
	int minute;
	int second;
public:
	void setHour(int h) {
		hour = h;
	}
	void setMinute(int m) {
		minute = m;
	}
	void setSecond(int s) {
		second = s;
	}
	int getHour() {
		return hour;
	}
	int getMinute() {
		return minute;
	}
	int getSecond() {
		return second;
	}
	/*void showtime();*/
};
int main() {
	/*MyTime *mt = new MyTime;*/
	MyTime mt;
	mt.setHour(12);
	mt.setMinute(0);
	mt.setSecond(0);

	cout << mt.getHour()<<":"<< mt.getMinute()<<":"<< mt.getSecond()<<endl;
	/*cout << mt->getHour()<<":"<< mt->getMinute()<<":"<< mt->getSecond()<<endl;
	delete mt;*/
	return 0;
}