//顺序查找算法(6-1-1)
//6/11/2021 By Chenx221 (chenx221.cyou)

#include<stdio.h>
#define MAXSIZE 100
#define OK 1;
int count1; //global

typedef struct{
	int key;//关键字域
}ElemType;

typedef struct{
	ElemType *R;
	int length;
}SSTable;

int InitList_SSTable(SSTable &L)
{
	L.R=new ElemType[MAXSIZE]; 
	if (!L.R)
	{	printf("初始化错误");
		return 0;
	}
	L.length=0;
	return OK;
}

int Creat_SSTable(SSTable &L)
{
    printf("请输入数据：(非数字字符结尾)");
    int i=1;
    
    while (scanf("%d",&L.R[i].key)) {
		i++;L.length++;
	}
    return OK; 
}

int Search_Seq(SSTable ST, int key) //设置监视哨的顺序查找
{
      /*在顺序表ST中顺序查找其关键字等于key的数据元素。若找到，则函数值为
      该元素在表中的位置，否则为0
      并统计出比较的次数*/
    	
    int i;
    if(!ST.R) return 0; //空 
    ST.R[0].key =key;
    for (i=ST.length; i>0 && ST.R[i].key != key ;i--,count1++);
    count1++;
	return i;

}// Search_Seq

int main( ){
	int key,result;
	
	printf("顺序查找\n"); 
	SSTable Table;
	InitList_SSTable(Table);
	Creat_SSTable(Table);
	printf("请输入需要查找的内容：\n"); getchar();
	scanf("%d",&key);
	result = Search_Seq(Table,key);
	if (result) printf("比较次数%d\t需查找的内容位于%d处\n",count1,result);
	else printf("比较次数%d,404",count1);

	return 0;
}
