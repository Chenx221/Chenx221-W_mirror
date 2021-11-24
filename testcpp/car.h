#pragma  once
#include <string>
#include <ctime>

using namespace std;

class Car						//汽车类
{
private:
    string carNum;				//汽车编号
    string carType;				//汽车型号
    string color;				//汽车颜色
    time_t inTime;				//汽车停车时间点
public:
    void addCar();				//增加车辆
    void delCar();				//删除车辆
    void findCar();				//查找车辆
    void modCar();				//修改车辆
    void timeAmount();			//计算停车时长
    void showInfor();			//显示车辆信息（读文件）//>>car.cpp
    void saveInfor();			//保存车辆信息（写文件）
};
