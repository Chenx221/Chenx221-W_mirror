/*
	Name: 实验1算法分析 实验1-2
	Copyright: 没有版权 
	Author: chenx221(chenx221.cyou)
	Date: 15/03/21 10:45
	Description: 请改进第1题的算法，使算法的时间复杂度T(n)=O(n*n)
*/
#include <stdio.h>
int main(){
	int i,j,k,n, m=0;
	long long t=0;
	printf("input n:");	
	scanf("%d",&n);
	for(i=0;i<=n/5;i++)
		for(j=0;j<=n/3; j++){
			k=n-i-j;
		 	t++;
			if(k%3==0&&i*5+j*3+k/3==n&&i+j+k==n)
				printf("m=%4d  %4d  %4d   %4d\n",++m,i,j,k);
        }
	printf("共有%d种方案，进行了%ld次判断\n",m,t);
	return 0;
}
