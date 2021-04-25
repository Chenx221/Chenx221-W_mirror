/*顺序栈的实现
文件名：*_实验3-1.cpp 
by Chenx221 (https://chenx221.cyou)
*/
#include<stdio.h>
#include "intstack.h"

void PrintStack(SqStack S) { //需要更改的地方 & removed
    SElemType e;
    while (!StackEmpty(S)) { //不空则输出 
        Pop(S, e);
        printf("%3d", e);
    }
    printf("\n");
}/*Pop_and_Print*/

int CreateStack(SqStack &S) {
    int e;
    if (InitStack(S)) {
        printf("初始化栈成功!\n");
        prt_base_top_length(S);
    } else {
        printf("初始化失败!\n");
        return ERROR;
    }
    printf("\n输入需要入栈的各个整数:(以非数字的字符结束)\n");
    while (scanf("%d", &e)) {
        Push(S, e);
        prt_base_top_length(S);
    };
    return OK;
}/*CreateStack*/


int main() {
    SqStack ss;
    printf("建立栈\n");
    prt_base_top_length(ss);
    CreateStack(ss);
    printf("\n-第1次：输出栈的参数及栈中全部元素\n");
    prt_base_top_length(ss);
    PrintStack(ss);

    printf("\n-第2次：输出栈的参数及栈中全部元素\n");
    prt_base_top_length(ss);
    PrintStack(ss);
    return 0;
}
