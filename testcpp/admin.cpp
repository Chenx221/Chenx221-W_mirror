#include "car.h"
#include "admin.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Admin::Manager()
{
    Car car;									//创建小汽车对象
    while (1)									//显示操作界面
    {
        system("cls");
        cout << "1.增加车辆" << endl;
        cout << "2.显示所有车辆信息" << endl;
        cout << "3.查询" << endl;
        cout << "4.修改" << endl;
        cout << "5.删除" << endl;
        cout << "6.统计" << endl;
        cout << "7.退出管理用户" << endl;
        cout << "请输入要执行的操作：";
        int i;
        cin >> i;
        switch (i)
        {
            case 1:
                car.addCar();					//如果输入1，添加车辆
                break;
            case 2:
                car.showInfor();				//如果输入2，显示车辆信息
                break;
            case 3:
                car.findCar();					//如果输入3，查找车辆
                break;
            case 4:
                car.modCar();					//如果输入4，修改车辆
                break;
            case 5: car.delCar();				//如果输入5，删除车辆
                break;
            case 6:
                car.timeAmount();				//如果输入6，计算停车时长
                break;
            case 7:
                return;							//输入7，退出管理员登录
            default: cout << "输入错误！" << endl;
        }
        system("pause");
    }
}
