#pragma  once
#include "user.h"
#include <string>
using namespace std;
//管理员类，公有继承普通用户类，具有添加、修改、删除等权限
class Admin :public User
{
public:
    void Manager();				//显示管理员登录的菜单
};
