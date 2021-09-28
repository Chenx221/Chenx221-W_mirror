#include<iostream>
#include "Student.h"
#include "Time.h"
#include<atltime.h>
using namespace std;


int main() {
	Student st;//*st = new Student;
	st.study();
	st.exam();
	st.setAge(18);
	st.setName("无名氏");
	cout << st.getAge() << "  " << st.getName() << endl;
	//delete st;
	Time t;
	t.setTime(12, 0, 0);
	t.printTime();
	CTime m_time;
	while(1) {
		m_time=CTime::GetCurrentTime();
		cout << m_time.GetYear()<<"年" << m_time.GetMonth()<<"月" << m_time.GetDay() <<"日" 
			<< m_time.GetHour()<<":" << m_time.GetMinute()<<":" << m_time.GetSecond()<<endl;
	}
	return 0;
}