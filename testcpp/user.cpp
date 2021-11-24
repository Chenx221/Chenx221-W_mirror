//USER  MENU
#include <iostream>
#include <windows.h>
#include "user.h"
#include "car.h"
using namespace std;
void User::checkCar()
{
    Car car;										//创建小汽车对象 // >>car.h
    while (1)										//普通用户登录菜单
    {
        system("cls");
        cout << "1.显示车辆状况" << endl;
        cout << "2.查询车辆信息" << endl;
        cout << "3.统计车辆" << endl;
        cout << "4.退出普通用户" << endl;
        int ch;
        cout << "请输入要执行的操作：";
        cin >> ch;
        switch (ch)
        {
            case 1: car.showInfor();				//如果输入1，显示车辆信息	//>>car.h
                break;
            case 2: car.findCar();					//如果输入2，查找车辆
                break;
            case 3: car.timeAmount();				//如果输入3，计算停车时长
                break;
            case 4:
                return;								//如果输入4，退出普通用户登录
            default:
                cout << "请输入正确的操作" << endl;
        }
        system("pause");
    }
}
