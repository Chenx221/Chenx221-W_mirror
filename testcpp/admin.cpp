#include "car.h"
#include "admin.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Admin::Manager()
{
    Car car;									//����С��������
    while (1)									//��ʾ��������
    {
        system("cls");
        cout << "1.���ӳ���" << endl;
        cout << "2.��ʾ���г�����Ϣ" << endl;
        cout << "3.��ѯ" << endl;
        cout << "4.�޸�" << endl;
        cout << "5.ɾ��" << endl;
        cout << "6.ͳ��" << endl;
        cout << "7.�˳������û�" << endl;
        cout << "������Ҫִ�еĲ�����";
        int i;
        cin >> i;
        switch (i)
        {
            case 1:
                car.addCar();					//�������1����ӳ���
                break;
            case 2:
                car.showInfor();				//�������2����ʾ������Ϣ
                break;
            case 3:
                car.findCar();					//�������3�����ҳ���
                break;
            case 4:
                car.modCar();					//�������4���޸ĳ���
                break;
            case 5: car.delCar();				//�������5��ɾ������
                break;
            case 6:
                car.timeAmount();				//�������6������ͣ��ʱ��
                break;
            case 7:
                return;							//����7���˳�����Ա��¼
            default: cout << "�������" << endl;
        }
        system("pause");
    }
}
