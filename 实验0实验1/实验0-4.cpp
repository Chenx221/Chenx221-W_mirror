/*
	Name: 预备实验  C语言的函数、数组、指针、结构体知识 实验0-4
	Copyright: 没有版权 
	Author: chenx221(chenx221.cyou)
	Date: 15/03/21 10:45
	Description: 调试程序：利用指针输出二维数组的元素。
*/
#include<stdio.h>
int main(){
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int *p;
	for(p=a[0];p<a[0]+12;p++){
		if((p-a[0])%4==0) printf("\n");
		printf("%4d",*p);
	}
	return 0;
}
