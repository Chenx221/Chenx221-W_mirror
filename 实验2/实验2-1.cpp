/*
	Name: 实验2-1
	Copyright: 	没有版权
	Author: chenx221(chenx221.cyou)
	Date: 19/03/21 15:15
	Description: 线性表的顺序存储结构。阅读下面程序，在横线处填写欠缺内容，
	并补充函数的基本功能注释。运行程序，写出结果（运行截图）。请将本题文件命名为："学号 姓名 实验2-1.cpp"
*/

#include<stdio.h>
#include<malloc.h>

#define ERROR 0
#define OVERFLOW -2
#define OK 1

#define MAXSIZE 100     /*初始分配的顺序表长度*/
typedef int ElemType;  /*定义表元素的类型*/
typedef int Status;//ADD

typedef struct {
    ElemType *elem; //存储空间的基地址
    int length; //当前长度
} SqList;

int InitList_sq(SqList &L); /*初始化顺序表*/
int CreateList_sq(SqList &L, int n); /*顺序表创建&导入数据*/
int ListInsert_sq(SqList &L, int i, ElemType e);/*插入数据*/
int PrintList_sq(SqList L);  /*输出顺序表的元素*/
int ListDelete_sq(SqList &L, int i); /*删除第i个元素*/
int ListLocate(SqList &L, ElemType e); /*查找值为e的元素*/

Status InitList_sq(SqList &L)  //算法2.1 顺序表的初始化(构造一个空的顺序表L)
{
    L.elem = (ElemType *) malloc(MAXSIZE * sizeof(ElemType));
    //为顺序表分配一个大小为MAXSIZE的数组空间
    if (!L.elem)
        return (OVERFLOW); //存储分配失败退出
    L.length = 0; //空表长度为0
    return OK;
}/*InitList*/


int CreateList_sq(SqList &L, int n) {
    ElemType e;
    int i;
    for (i = 1; i <= n; i++) {
        printf("input data %d: ", i);
        scanf("%d", &e);
        if (!ListInsert_sq(L, i, e))
            return ERROR;
    }
    return OK;
}/*CreateList*/

/*输出顺序表中的元素*/
int PrintList_sq(SqList L) {
    int i;
    for (i = 1; i <= L.length; i++)
        printf("%5d", L.elem[i - 1]);
    return OK;
}/*PrintList*/

int ListInsert_sq(SqList &L, int i, ElemType e) {
    int k;
    if (i < 1 || i > L.length + 1)
        return ERROR;
    if (L.length >= MAXSIZE) {
        return ERROR;
    }
    for (k = L.length - 1; k >= i - 1; k--) {
        L.elem[k + 1] = L.elem[k];
    }
    L.elem[i - 1] = e;
    L.length++;
    return OK;
}/*ListInsert*/

/*在顺序表中删除第i个元素,并用e返回其值，i值的合法范围是1<=i<=L.length */
Status ListDelete_Sq(SqList &L, int i, ElemType &e) {
    if (i < 1 || i > L.length)
        return ERROR;
    e = L.elem[i - 1];
    //printf("DEBUG");
    for (int p = i; p <= L.length - 1; p++)
        L.elem[p - 1] = L.elem[p];
    L.length--;
    return OK;
}

/*在顺序表中查找指定值元素，返回其序号*/
Status ListLocate(SqList &L, ElemType e) {
    int *p = L.elem;
    int i = 1;
    while (p <= &L.elem[L.length - 1]) {
        if (*p == e) return i;
        i++;
        p++;
    }
    printf("404 Not Found");
    return ERROR;
}

int main() {
    SqList sl;
    int n, m, k, del_loc, temp, st;
    printf("please input n:");  /*输入顺序表的元素个数*/
    scanf("%d", &n);
    if (n <= 0) {
        printf("参数错误，退出。\n");
        return 0;
    }
    printf("\n1-Create SqList:\n");
    InitList_sq(sl);
    CreateList_sq(sl, n);
    printf("\n2-Print SqList:\n");
    PrintList_sq(sl);
    printf("\nplease input insert location and data:(location,data)\n");
    scanf("%d,%d", &m, &k);
    ListInsert_sq(sl, m, k);
    printf("\n3-Print SqList:\n");
    PrintList_sq(sl);
    printf("\n4-Delete the specified element:(Ex: location)\n");
    scanf("%d", &del_loc);
    ListDelete_Sq(sl, del_loc, temp);
    printf("%d has been removed\n", temp);
    printf("\n5-Print SqList:\n");
    PrintList_sq(sl);
    printf("\n6-Find the specified element in the list:(Ex: value)\n");
    scanf("%d", &temp);
    st = ListLocate(sl, temp);
    if (st != 0) printf("%d", st);
    printf("\n");

    return 0;
}
