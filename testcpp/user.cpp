//USER  MENU
#include <iostream>
#include <windows.h>
#include "user.h"
#include "car.h"
using namespace std;
void User::checkCar()
{
    Car car;										//����С�������� // >>car.h
    while (1)										//��ͨ�û���¼�˵�
    {
        system("cls");
        cout << "1.��ʾ����״��" << endl;
        cout << "2.��ѯ������Ϣ" << endl;
        cout << "3.ͳ�Ƴ���" << endl;
        cout << "4.�˳���ͨ�û�" << endl;
        int ch;
        cout << "������Ҫִ�еĲ�����";
        cin >> ch;
        switch (ch)
        {
            case 1: car.showInfor();				//�������1����ʾ������Ϣ	//>>car.h
                break;
            case 2: car.findCar();					//�������2�����ҳ���
                break;
            case 3: car.timeAmount();				//�������3������ͣ��ʱ��
                break;
            case 4:
                return;								//�������4���˳���ͨ�û���¼
            default:
                cout << "��������ȷ�Ĳ���" << endl;
        }
        system("pause");
    }
}
