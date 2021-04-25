/*
	Name: 实验1算法分析 实验1-1
	Copyright: 没有版权 
	Author: chenx221(chenx221.cyou)
	Date: 15/03/21 10:45
	Description: 完成下面的程序，用户输入钱的数目，输出购买的方案，统计该算法基本操作的执行次数，请提交运行结果，并分析该算法的时间复杂度。
*/
#include <stdio.h>
int main(){
	int i,j,k,n, m=0;
	long long t=0;
	printf("input n:");	
	scanf("%d",&n);
	for(i=0;i<=n/5;i++)
		for(j=0;j<=n/3; j++)
			for(k=0;k<=n;k=k+3){
				t++;
             	if(i*5+j*3+k/3==n&&i+j+k==n)
				printf("m=%4d  %4d  %4d   %4d\n",++m,i,j,k);
        	}
	printf("共有%d种方案，进行了%lld次判断\n",m,t);
	return 0;
}
