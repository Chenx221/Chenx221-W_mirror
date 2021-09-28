#pragma once
#ifndef TIME_H
#define TIME_H
class Time{
public:
	void setTime(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	void printTime() {
		cout << hour << ":" << minute << ":" << second << endl;
	}
private:
	int hour;
	int minute;
	int second;
};

#endif