#pragma  once
#include "user.h"
#include <string>
using namespace std;
//����Ա�࣬���м̳���ͨ�û��࣬������ӡ��޸ġ�ɾ����Ȩ��
class Admin :public User
{
public:
    void Manager();				//��ʾ����Ա��¼�Ĳ˵�
};
