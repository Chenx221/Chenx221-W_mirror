#pragma  once
#include <string>
#include <ctime>

using namespace std;

class Car						//������
{
private:
    string carNum;				//�������
    string carType;				//�����ͺ�
    string color;				//������ɫ
    time_t inTime;				//����ͣ��ʱ���
public:
    void addCar();				//���ӳ���
    void delCar();				//ɾ������
    void findCar();				//���ҳ���
    void modCar();				//�޸ĳ���
    void timeAmount();			//����ͣ��ʱ��
    void showInfor();			//��ʾ������Ϣ�����ļ���//>>car.cpp
    void saveInfor();			//���泵����Ϣ��д�ļ���
};
