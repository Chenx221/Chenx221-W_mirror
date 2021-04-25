/*栈、十进制转换为八进制的数制转换程序 
文件名：*_实验3-2.cpp 
by Chenx221 (https://chenx221.cyou)
*/
#include<stdio.h>
#include "intstack.h"

Status conversion(int N,int R) {
//对于任意一个十进制数，打印输出与其等值的R进制数,2<=R<=16
	int e;
	SqStack S;
	if (R<2 || R>16)  return ERROR; //进制范围 //m1 
	
	InitStack(S); //初始化空栈S
	if(N<0)	
	{   	N=-N;      	cout<<'-';  } //处理负数 

	while (N) //当N非零时,循环
	{
		Push(S,N%R); //把N与R求余得到的R进制数压入栈S //NTR //m2
		N=N/R; //N更新为N与R的商 //m3
	}
	while (!StackEmpty(S)) //当栈S非空时，循环
	{
		Pop(S,e); //弹出栈顶元素 //m4
		printf("%X",e); //输出e
	}
	return OK;
}

int main(){
    int n,r; //变量定义 //m5 
    while(1){
		printf("\n请输入一个十进制整数及需要转换的进制(如45 2),输入0 0结束\n");
		scanf("%d%d",&n,&r);
    	if(r<2) return ERROR; 
		printf("十进制数%4d 对应的%2d 进制数为: ",n,r);
		if(conversion(n,r))
			printf("\n转换成功！\n");
		else
			printf("\n参数错误！\n");
	}
    return 0;
}   	
