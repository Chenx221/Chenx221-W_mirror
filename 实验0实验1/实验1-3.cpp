/*
	Name: 实验1算法分析 实验1-3
	Copyright: 没有版权 
	Author: chenx221(chenx221.cyou)
	Date: 15/03/21 10:45
	Description: 补充完成并运行下面程序，分析结果。

*/
#include <stdio.h>
int main(){
	int i,j,k,n,t=0,m=0;
	printf("input n:");
	scanf("%d",&n);
	for(i=0;i<=n/5;i++){
		t++;
		j=(n-7*i)/4;
		k=n-i-j;
		if( j>=0 && k%3==0 && i*5+j*3+k/3==n)
			printf("m=%4d  %4d  %4d   %4d\n",++m,i,j,k);
	}
	printf("共有%d种方案，进行了%d次判断\n",m,t);
	return 0;
}
