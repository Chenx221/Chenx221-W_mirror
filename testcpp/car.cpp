#include "car.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;
//添加车辆
void Car::addCar()
{
    time_t _time;						//定义时间变量
    while (1)						    //在while循环中输入车辆信息
    {
        AA:		cout << "请输入车牌号：";
        cin >> carNum;
        //判断文件中是否已经有相同的车牌号
        ifstream ifs("carData.txt", ios::in);		//读取文件
        //如果文件打开成功，执行车牌查询操作，判断是否有重复
        if (ifs)
        {
            char buf[1024];				//定义字符数组buf
            string strs[20];			//定义string数组strs
            int index = 0;				//index标识数组索引
            while (!ifs.eof())			//读取文件，直到文件末尾
            {
                ifs.getline(buf, 100);	//每次读取一行数据，存储到buf数组中
                //每次将第一个字段buf[0]（车牌号）保存到strs数组中
                strs[index] = buf[0];
                index++;				//索引index自增
            }
            for (auto& num : strs)		//遍历strs数组
            {
                //判断新输入的车牌号carNum是否与strs中元素有重复
                if (num == carNum)
                {
                    cout << "车牌号重复！" << endl;
                    goto AA;			//如果重复就跳转到车牌输入处，重新输入
                }
            }
        }
        cout << "请输入车的种类：";		//输入车的种类
        cin >> carType;
        cout << "请输入车的颜色：";		//输入车辆颜色1578708769
        cin >> color;
        inTime = time(&_time); 			//记录停车时间
        saveInfor();					//调用saveInfor()函数保存新增车辆信息
        char ch;
        cout << "\t是否继续?(y/n)";		//输入完毕，判断是否继续输入
        cin >> ch;
        if (ch == 'n' || ch == 'N')
            break;
    }
}
//删除车辆
void Car::delCar()
{
    //创建文件读取流，打开carData.txt文件
    ifstream carData("carData.txt", ios::in);
    //创建文件写入流，打开tempcarData.txt文件
    ofstream outData("tempcarData.txt", ios::out);
    if (!carData || !outData)
    {
        cout << "文件打开失败！" << endl;
        return;
    }
    string carlicense, name, str;
    bool flag = true;
    cout << "请输入要删除的车牌号：";
    cin >> carlicense;						   //输入车牌号
    while (carData >> name)
    {
        getline(carData, str);				   //将这一行剩下的数据读取到str
        if (carlicense == name)				   //判断车牌号是否相同
        {
            //如果相同，输出要删除的车辆信息：型号、颜色、停车时间
            cout << "要删除的车辆信息：" << endl << str << endl;
            flag = false;						//设置flag的值为false
            break;								//退出循环
        }
        //如果车牌号不相等，将车辆信息写入到tempcarData.txt文件中
        outData << name << " " << str << endl;
    }
    if (flag)
        cout << "该车牌号不存在" << endl;
    else							//如果flag为true，即要删除的车牌号存在
    {
        while (getline(carData, str))		//按行读取carData.txt中的文件
        {
            outData << str << endl;			//写入到tempcarData.txt文件中
        }
        carData.close();					//关闭carData.txt文件
        outData.close();					//关闭tempcarData.txt文件
        //再读取tempcarData.txt文件中的数据（删除后），写入到carData.txt文件中
        ifstream in("tempcarData.txt", ios::in);
        ofstream out("carData.txt", ios::out);
        if (!in || !out)
        {
            cout << "文件打开失败！" << endl;
            return;
        }
        else
            while (getline(in, str))			//按行读取、写入
            {
                out << str << endl;
            }
        //关闭两个文件
        in.close();
        out.close();
    }
}
//查找车辆
void Car::findCar()
{
    //创建文件输入流，打开carData.txt文件
    ifstream carData("carData.txt", ios::in);
    if (!carData)
    {
        cout << "文件打开失败！" << endl;
        return;
    }
    else
    {
        string carLicense;
        time_t _time, t1;
        bool flag = true;
        cout << "请输入要查询的车牌号:";
        cin >> carLicense;					//输入车牌号
        while (carData >> carNum)			//读取车牌号
        {
            //读取车辆型号、颜色、停车时间点
            carData >> carType >> color >> inTime;
            t1 = time(&_time);				//获取系统当前时间
//判断输入的车牌号与文件读取车牌号是否相等
            if (carLicense == carNum)
            {
                flag = false;				//如果车牌号相同，设置flag为false
                break;						//退出循环
            }
        }
        if (flag)
            cout << "未找到该车辆信息！" << endl;
        else								//输出查找的车辆信息
            cout << "车牌号：" << carNum << " " << "车辆类型：" << carType
                 << " " << "颜色：" << color << " " << "停车时长：" << (t1 - inTime) << "秒"
                 << " " << "计费：" << (t1 - inTime) * 0.005 << "元" << endl;
    }
    carData.close();						//关闭carData.txt文件
}
//修改车辆信息
void Car::modCar()
{
    //创建文件输入流，打开carData.txt文件
    ifstream carData("carData.txt", ios::in);
    //创建文件输出流，打开tempcarData.txt文件
    ofstream outData("tempcarData.txt", ios::out);
    if (!carData || !outData)
    {
        cout << "文件打开失败！" << endl;
        return;
    }
    string name, str;
    bool flag = true;
    cout << "请输入要修改的车牌号：";
    cin >> carNum;									//输入车牌号
    //从carData.txt文件中读取车牌号
    while (carData >> name)
    {
        getline(carData, str);						//读取该行剩下的数据
        //判断输入的车牌号与文件读取的车牌号是否相同
        if (carNum == name)
        {
            time_t _time;							//定义时间变量
            cout << "修改后的车牌号：";
            cin >> carNum;							//输出车牌号
            cout << "修改后的车的种类：";
            cin >> carType;							//输出汽车型号
            cout << "修改后的车的颜色：";
            cin >> color;							//输出汽车颜色
            //将当前系统时间转换格式之后赋值给inTime
            inTime = time(&_time);
            outData << carNum << " " << carType	//输出汽车信息
                    << " " << color << " " << inTime << endl;
            flag = false;					//设置flag的值为false
            break;							//退出循环
        }
        //如果车牌号不相同，将车辆信息写入tempcarData.txt中
        outData << name << " " << str << endl;
    }
    if (flag)
        cout << "修改车辆数据不存在！" << endl;
        //如果flag为true，即车牌号存在，修改车辆信息
    else
    {
        while (getline(carData, str))		//按行读取carData.txt文件中的数据
        {
            outData << str << endl;			//写入到tempcarData.txt文件中
        }
        carData.close();					//关闭carData.txt文件
        outData.close();					//关闭tempcarData.txt文件
        //下面的代码，读取tempcarData.txt文件数据，写入到carData.txt文件
        ifstream in("tempcarData.txt", ios::in);
        ofstream out("carData.txt", ios::out);
        if (!in || !out)
        {
            cout << "文件打开失败！" << endl;
            return;
        }
        else
            //按行读取tempcarData.txt文件中的数据
            while (getline(in, str))
            {
                out << str << endl;			//写入carData.txt文件
            }
        //关闭两个文件
        in.close();
        out.close();
    }
}
//显示所有车辆信息
void Car::showInfor()
{
    //创建文件输入流，打开carData.txt文件
    ifstream carData("carData.txt", ios::in);
    if (!carData)
    {
        cout << "文件打开失败！" << endl;
        return;
    }
    else
    {
        bool flag = true;
        time_t _time, t;						//定义时间变量
        //读取车辆编号，>>遇空格结束读取，因此只读取车牌号一个字段
        while (carData >> carNum)
        {
            //读取车辆型号、颜色、停车时间
            carData >> carType >> color >> inTime;
            t = time(&_time);					//获取系统当前时间
            //输出车辆信息
            cout << "车牌号：" << carNum << " " << "车辆类型：" << carType
                 << " " << "颜色：" << color << " " << "停车时长：" << (t - inTime) << "秒"
                 << " " << "计费：" << (t - inTime) * 0.005 << "元" << endl;
            flag = false;						//设置flag值为false
        }
        if (flag)
            cout << "\n无车辆信息" << endl;
        else
            cout << "\n车辆信息已显示" << endl;
    }
    carData.close();							//关闭carData.txt文件
}
//计算停车时长
void Car::timeAmount()
{
    //创建文件输入流，打开carData.txt文件
    ifstream carData("carData.txt", ios::in);
    if (!carData)
    {
        cout << "文件打开失败！" << endl;
        return;
    }
    else
    {
        int c1 = 0, c2 = 0;		//c1表示总车辆数，c2表示停车不超过一天的车辆数
        time_t _time, t1;						//定义时间变量
        while (carData >> carNum)				//读取车牌号
        {
            c1++;								//每读取一个车牌号，c1自增
            t1 = time(&_time);					//获取系统当前时间
            //读取车辆型号、颜色、停车时间
            carData >> carType >> color >> inTime;
//计算车辆停车时长，如果不超过一天
            if ((t1 - inTime) * 0.0001 < long(8.64))
                c2++;							//c2自增
        }
        //循环结束，输出车辆停车时长信息
        cout << "车辆总数：" << c1 << endl;
        cout << "停车时间不超过一天：" << c2 << endl;
        cout << "停车时间超过一天：" << c1 - c2 << endl;
    }
    carData.close();							//关闭carData.txt文件
}
//保存车辆信息
void Car::saveInfor()
{
    //创建文件输出流，打开carData.txt文件
    ofstream outData("carData.txt", ios::app);
    if (!outData)
    {
        cout << "文件打开失败！" << endl;
        return;
    }
    else
    {
        //将车辆信息保存到文件中
        outData << carNum << " " << carType
                << " " << color << " " << inTime << endl;
    }
    outData.close();								//关闭carData.txt文件
}
