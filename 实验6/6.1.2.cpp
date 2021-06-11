//折半查找算法(6-1-2)
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

int Search_half(SSTable ST, int key) //对分查找
{
	int i,j,mid; //i left ; j right
	for (i=1,j=ST.length;i<=j;) {
		mid=(i+j)/2;
		count1++;
		if (key == ST.R[mid].key) return mid;
		else if (key > ST.R[mid].key) i=mid+1;
		else j=mid-1;
	}
	return 0;

}// Search_Seq

int main( ){
	int key,result;
	
	printf("对分查找\n"); 
	SSTable Table;
	InitList_SSTable(Table);
	Creat_SSTable(Table);
	printf("请输入需要查找的内容：\n"); getchar();
	scanf("%d",&key);
	result = Search_half(Table,key);
	if (result) printf("比较次数%d\t需查找的内容位于%d处\n",count1,result);
	else printf("比较次数%d,404",count1);

	return 0;
}
