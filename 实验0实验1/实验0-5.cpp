/*
	Name: 预备实验  C语言的函数、数组、指针、结构体知识 实验0-5
	Copyright: 没有版权 
	Author: chenx221(chenx221.cyou)
	Date: 15/03/21 10:45
	Description: 调试程序：设有一个学生表格，有姓名、年龄、班级3项，编程输入人员的数据，再以表格输出。
*/
#include <stdio.h>
#define N 10
typedef struct student{
	char name[8];		
	int age;		
	int classroom;		
} PERSON; 
int main(){
	int i, n;
PERSON  stu[N];

printf("\n 人数(<10):\n");
scanf("%d",&n);
	for(i=0;i<n;i++){			
		printf("\n 请输入 %d 人员信息(name  age    class)\n",i+1);
		scanf("%s%d%d",&stu[i].name, &stu[i].age, &stu[i].classroom);
	}
	printf("name    age     class/office\n");
	for(i=0;i<n;i++){			
		printf("%s is %3d years old.  His class  is %d\n",stu[i].name, stu[i].age,  stu[i].classroom);
}
}
