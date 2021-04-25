/*
	Name: 预备实验  C语言的函数、数组、指针、结构体知识 实验0-2
	Copyright: 没有版权 
	Author: chenx221(chenx221.cyou)
	Date: 15/03/21 10:45
	Description: 调试程序：对一维数组中的元素进行逆序排列。
*/
#include<stdio.h>
#define N 10
int main(){
	int a[N]={0,1,2,3,4,5,6,7,8,9},i,temp;
	printf("\nthe original Array is:\n ");
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	for(i=0;i<(N/2);i++){		
		temp=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=temp;
	}
	printf("\nthe changed Array is:\n");
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	return 0;
}
