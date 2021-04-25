/*
	Name: 预备实验  C语言的函数、数组、指针、结构体知识 实验0-1 
	Copyright: 没有版权 
	Author: chenx221(chenx221.cyou)
	Date: 15/03/21 10:45
	Description: 调试程序：输出100以内所有的素数（用函数实现）。
*/

#include<stdio.h>
int isprime(int n){      
    int m;
	for(m=2;m*m<=n;m++)
		if(n%m==0) return 0;
	return 1;
}

int main(){          
	int i;printf("\n");
	for(i=2;i<100;i++)
		if(isprime(i)) printf("%4d",i);
	return 0;
}
