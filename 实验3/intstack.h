/*顺序栈的实现
文件名：intstack.h
by Chenx221 (https://chenx221.cyou)
*/
#include<iostream>
#include<fstream>

using namespace std;

//顺序栈定义
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE  100//顺序栈存储空间的初始分配量
typedef int Status;
typedef int SElemType;

typedef struct {
    SElemType *base;//栈底指针
    SElemType *top;//栈顶指针
    int stacksize;//栈可用的最大容量
} SqStack;

//算法3.1　顺序栈的初始化
Status InitStack(SqStack &S) {
    //构造一个空栈S
    S.base = new SElemType[MAXSIZE];//为顺序栈动态分配一个最大容量为MAXSIZE的数组空间
    if (!S.base)
        exit(OVERFLOW); //存储分配失败
    S.top = S.base; //top初始为base，空栈 //m1
    S.stacksize = MAXSIZE; //stacksize置为栈的最大容量MAXSIZE
    return OK;
}

//算法3.2　顺序栈的入栈
Status Push(SqStack &S, SElemType e) {
    if (S.top - S.base == S.stacksize) return OVERFLOW; //extra 1
    *(S.top++) = e; //m2
    return OK; //m7
    // 插入元素e为新的栈顶元素
}

//算法3.3　顺序栈的出栈
Status Pop(SqStack &S, SElemType &e) {
    if (S.top == S.base) return ERROR; //extra 2
    e = *(--S.top); //m3
    return OK; //m8
    //删除S的栈顶元素，用e返回其值	
}

//算法3.4　取顺序栈的栈顶元素
char GetTop(SqStack S) {//返回S的栈顶元素，不修改栈顶指针
    if (S.top != S.base) //栈非空
        return *(S.top - 1); //m4
    return ERROR; //m7
    //返回栈顶元素的值，栈顶指针不变
}

////算法3.5　判断栈是否为空
int StackEmpty(SqStack S) {//若栈为空，返回1 ，否则返回0

    if (S.top == S.base) //m5
        return 1;
    else
        return 0;
}

void prt_base_top_length(SqStack s) {//输出栈的参数 //m6s //s yes | S no
    printf("s.base=%d  s.top=%d    s.length=%d\n", s.base, s.top, s.top - s.base);
}
