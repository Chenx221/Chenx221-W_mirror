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
	st.setName("������");
	cout << st.getAge() << "  " << st.getName() << endl;
	//delete st;
	Time t;
	t.setTime(12, 0, 0);
	t.printTime();
	CTime m_time;
	while(1) {
		m_time=CTime::GetCurrentTime();
		cout << m_time.GetYear()<<"��" << m_time.GetMonth()<<"��" << m_time.GetDay() <<"��" 
			<< m_time.GetHour()<<":" << m_time.GetMinute()<<":" << m_time.GetSecond()<<endl;
	}
	return 0;
}