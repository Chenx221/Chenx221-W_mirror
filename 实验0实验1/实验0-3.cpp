/*
	Name: 预备实验  C语言的函数、数组、指针、结构体知识 实验0-3
	Copyright: 没有版权 
	Author: chenx221(chenx221.cyou)
	Date: 15/03/21 10:45
	Description: 调试程序：在二维数组中，若某一位置上的元素在该行中最大，而在该列中最小，则该元素即为该二维数组的一个鞍点。要求从键盘上输入一个二维数组，当鞍点存在时，把鞍点找出来。
*/
#include<stdio.h>
#define M 3
#define N 4
int main(){
	int a[M][N],i,j,k;
	printf("\nPlease type:\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<M;i++){	
		for(j=0;j<N;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<M;i++){
		k=0;
		for(j=1;j<N;j++)	
			if(a[i][j]>a[i][k])
				k=j;
		for(j=0;j<M;j++)	
			if(a[j][k]<a[i][k])
				break;
		if(j==M)			
			printf("%d,%d,%d\n",a[i][k],i,k);
	}
	return 0;
}
