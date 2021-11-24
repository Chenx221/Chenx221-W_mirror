#include "car.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;
//��ӳ���
void Car::addCar()
{
    time_t _time;						//����ʱ�����
    while (1)						    //��whileѭ�������복����Ϣ
    {
        AA:		cout << "�����복�ƺţ�";
        cin >> carNum;
        //�ж��ļ����Ƿ��Ѿ�����ͬ�ĳ��ƺ�
        ifstream ifs("carData.txt", ios::in);		//��ȡ�ļ�
        //����ļ��򿪳ɹ���ִ�г��Ʋ�ѯ�������ж��Ƿ����ظ�
        if (ifs)
        {
            char buf[1024];				//�����ַ�����buf
            string strs[20];			//����string����strs
            int index = 0;				//index��ʶ��������
            while (!ifs.eof())			//��ȡ�ļ���ֱ���ļ�ĩβ
            {
                ifs.getline(buf, 100);	//ÿ�ζ�ȡһ�����ݣ��洢��buf������
                //ÿ�ν���һ���ֶ�buf[0]�����ƺţ����浽strs������
                strs[index] = buf[0];
                index++;				//����index����
            }
            for (auto& num : strs)		//����strs����
            {
                //�ж�������ĳ��ƺ�carNum�Ƿ���strs��Ԫ�����ظ�
                if (num == carNum)
                {
                    cout << "���ƺ��ظ���" << endl;
                    goto AA;			//����ظ�����ת���������봦����������
                }
            }
        }
        cout << "�����복�����ࣺ";		//���복������
        cin >> carType;
        cout << "�����복����ɫ��";		//���복����ɫ1578708769
        cin >> color;
        inTime = time(&_time); 			//��¼ͣ��ʱ��
        saveInfor();					//����saveInfor()������������������Ϣ
        char ch;
        cout << "\t�Ƿ����?(y/n)";		//������ϣ��ж��Ƿ��������
        cin >> ch;
        if (ch == 'n' || ch == 'N')
            break;
    }
}
//ɾ������
void Car::delCar()
{
    //�����ļ���ȡ������carData.txt�ļ�
    ifstream carData("carData.txt", ios::in);
    //�����ļ�д��������tempcarData.txt�ļ�
    ofstream outData("tempcarData.txt", ios::out);
    if (!carData || !outData)
    {
        cout << "�ļ���ʧ�ܣ�" << endl;
        return;
    }
    string carlicense, name, str;
    bool flag = true;
    cout << "������Ҫɾ���ĳ��ƺţ�";
    cin >> carlicense;						   //���복�ƺ�
    while (carData >> name)
    {
        getline(carData, str);				   //����һ��ʣ�µ����ݶ�ȡ��str
        if (carlicense == name)				   //�жϳ��ƺ��Ƿ���ͬ
        {
            //�����ͬ�����Ҫɾ���ĳ�����Ϣ���ͺš���ɫ��ͣ��ʱ��
            cout << "Ҫɾ���ĳ�����Ϣ��" << endl << str << endl;
            flag = false;						//����flag��ֵΪfalse
            break;								//�˳�ѭ��
        }
        //������ƺŲ���ȣ���������Ϣд�뵽tempcarData.txt�ļ���
        outData << name << " " << str << endl;
    }
    if (flag)
        cout << "�ó��ƺŲ�����" << endl;
    else							//���flagΪtrue����Ҫɾ���ĳ��ƺŴ���
    {
        while (getline(carData, str))		//���ж�ȡcarData.txt�е��ļ�
        {
            outData << str << endl;			//д�뵽tempcarData.txt�ļ���
        }
        carData.close();					//�ر�carData.txt�ļ�
        outData.close();					//�ر�tempcarData.txt�ļ�
        //�ٶ�ȡtempcarData.txt�ļ��е����ݣ�ɾ���󣩣�д�뵽carData.txt�ļ���
        ifstream in("tempcarData.txt", ios::in);
        ofstream out("carData.txt", ios::out);
        if (!in || !out)
        {
            cout << "�ļ���ʧ�ܣ�" << endl;
            return;
        }
        else
            while (getline(in, str))			//���ж�ȡ��д��
            {
                out << str << endl;
            }
        //�ر������ļ�
        in.close();
        out.close();
    }
}
//���ҳ���
void Car::findCar()
{
    //�����ļ�����������carData.txt�ļ�
    ifstream carData("carData.txt", ios::in);
    if (!carData)
    {
        cout << "�ļ���ʧ�ܣ�" << endl;
        return;
    }
    else
    {
        string carLicense;
        time_t _time, t1;
        bool flag = true;
        cout << "������Ҫ��ѯ�ĳ��ƺ�:";
        cin >> carLicense;					//���복�ƺ�
        while (carData >> carNum)			//��ȡ���ƺ�
        {
            //��ȡ�����ͺš���ɫ��ͣ��ʱ���
            carData >> carType >> color >> inTime;
            t1 = time(&_time);				//��ȡϵͳ��ǰʱ��
//�ж�����ĳ��ƺ����ļ���ȡ���ƺ��Ƿ����
            if (carLicense == carNum)
            {
                flag = false;				//������ƺ���ͬ������flagΪfalse
                break;						//�˳�ѭ��
            }
        }
        if (flag)
            cout << "δ�ҵ��ó�����Ϣ��" << endl;
        else								//������ҵĳ�����Ϣ
            cout << "���ƺţ�" << carNum << " " << "�������ͣ�" << carType
                 << " " << "��ɫ��" << color << " " << "ͣ��ʱ����" << (t1 - inTime) << "��"
                 << " " << "�Ʒѣ�" << (t1 - inTime) * 0.005 << "Ԫ" << endl;
    }
    carData.close();						//�ر�carData.txt�ļ�
}
//�޸ĳ�����Ϣ
void Car::modCar()
{
    //�����ļ�����������carData.txt�ļ�
    ifstream carData("carData.txt", ios::in);
    //�����ļ����������tempcarData.txt�ļ�
    ofstream outData("tempcarData.txt", ios::out);
    if (!carData || !outData)
    {
        cout << "�ļ���ʧ�ܣ�" << endl;
        return;
    }
    string name, str;
    bool flag = true;
    cout << "������Ҫ�޸ĵĳ��ƺţ�";
    cin >> carNum;									//���복�ƺ�
    //��carData.txt�ļ��ж�ȡ���ƺ�
    while (carData >> name)
    {
        getline(carData, str);						//��ȡ����ʣ�µ�����
        //�ж�����ĳ��ƺ����ļ���ȡ�ĳ��ƺ��Ƿ���ͬ
        if (carNum == name)
        {
            time_t _time;							//����ʱ�����
            cout << "�޸ĺ�ĳ��ƺţ�";
            cin >> carNum;							//������ƺ�
            cout << "�޸ĺ�ĳ������ࣺ";
            cin >> carType;							//��������ͺ�
            cout << "�޸ĺ�ĳ�����ɫ��";
            cin >> color;							//���������ɫ
            //����ǰϵͳʱ��ת����ʽ֮��ֵ��inTime
            inTime = time(&_time);
            outData << carNum << " " << carType	//���������Ϣ
                    << " " << color << " " << inTime << endl;
            flag = false;					//����flag��ֵΪfalse
            break;							//�˳�ѭ��
        }
        //������ƺŲ���ͬ����������Ϣд��tempcarData.txt��
        outData << name << " " << str << endl;
    }
    if (flag)
        cout << "�޸ĳ������ݲ����ڣ�" << endl;
        //���flagΪtrue�������ƺŴ��ڣ��޸ĳ�����Ϣ
    else
    {
        while (getline(carData, str))		//���ж�ȡcarData.txt�ļ��е�����
        {
            outData << str << endl;			//д�뵽tempcarData.txt�ļ���
        }
        carData.close();					//�ر�carData.txt�ļ�
        outData.close();					//�ر�tempcarData.txt�ļ�
        //����Ĵ��룬��ȡtempcarData.txt�ļ����ݣ�д�뵽carData.txt�ļ�
        ifstream in("tempcarData.txt", ios::in);
        ofstream out("carData.txt", ios::out);
        if (!in || !out)
        {
            cout << "�ļ���ʧ�ܣ�" << endl;
            return;
        }
        else
            //���ж�ȡtempcarData.txt�ļ��е�����
            while (getline(in, str))
            {
                out << str << endl;			//д��carData.txt�ļ�
            }
        //�ر������ļ�
        in.close();
        out.close();
    }
}
//��ʾ���г�����Ϣ
void Car::showInfor()
{
    //�����ļ�����������carData.txt�ļ�
    ifstream carData("carData.txt", ios::in);
    if (!carData)
    {
        cout << "�ļ���ʧ�ܣ�" << endl;
        return;
    }
    else
    {
        bool flag = true;
        time_t _time, t;						//����ʱ�����
        //��ȡ������ţ�>>���ո������ȡ�����ֻ��ȡ���ƺ�һ���ֶ�
        while (carData >> carNum)
        {
            //��ȡ�����ͺš���ɫ��ͣ��ʱ��
            carData >> carType >> color >> inTime;
            t = time(&_time);					//��ȡϵͳ��ǰʱ��
            //���������Ϣ
            cout << "���ƺţ�" << carNum << " " << "�������ͣ�" << carType
                 << " " << "��ɫ��" << color << " " << "ͣ��ʱ����" << (t - inTime) << "��"
                 << " " << "�Ʒѣ�" << (t - inTime) * 0.005 << "Ԫ" << endl;
            flag = false;						//����flagֵΪfalse
        }
        if (flag)
            cout << "\n�޳�����Ϣ" << endl;
        else
            cout << "\n������Ϣ����ʾ" << endl;
    }
    carData.close();							//�ر�carData.txt�ļ�
}
//����ͣ��ʱ��
void Car::timeAmount()
{
    //�����ļ�����������carData.txt�ļ�
    ifstream carData("carData.txt", ios::in);
    if (!carData)
    {
        cout << "�ļ���ʧ�ܣ�" << endl;
        return;
    }
    else
    {
        int c1 = 0, c2 = 0;		//c1��ʾ�ܳ�������c2��ʾͣ��������һ��ĳ�����
        time_t _time, t1;						//����ʱ�����
        while (carData >> carNum)				//��ȡ���ƺ�
        {
            c1++;								//ÿ��ȡһ�����ƺţ�c1����
            t1 = time(&_time);					//��ȡϵͳ��ǰʱ��
            //��ȡ�����ͺš���ɫ��ͣ��ʱ��
            carData >> carType >> color >> inTime;
//���㳵��ͣ��ʱ�������������һ��
            if ((t1 - inTime) * 0.0001 < long(8.64))
                c2++;							//c2����
        }
        //ѭ���������������ͣ��ʱ����Ϣ
        cout << "����������" << c1 << endl;
        cout << "ͣ��ʱ�䲻����һ�죺" << c2 << endl;
        cout << "ͣ��ʱ�䳬��һ�죺" << c1 - c2 << endl;
    }
    carData.close();							//�ر�carData.txt�ļ�
}
//���泵����Ϣ
void Car::saveInfor()
{
    //�����ļ����������carData.txt�ļ�
    ofstream outData("carData.txt", ios::app);
    if (!outData)
    {
        cout << "�ļ���ʧ�ܣ�" << endl;
        return;
    }
    else
    {
        //��������Ϣ���浽�ļ���
        outData << carNum << " " << carType
                << " " << color << " " << inTime << endl;
    }
    outData.close();								//�ر�carData.txt�ļ�
}
