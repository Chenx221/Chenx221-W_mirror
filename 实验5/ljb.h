// 邻接表.h
#include <stdio.h>
#include <iostream>
using namespace std;

#define MaxInt 32767                    	//表示极大值，即∞
#define MVNum 100                       	//最大顶点数
#define OK 1

typedef char VerTexType;              		//假设顶点的数据类型为字符型
typedef int ArcType;                  		//假设边的权值类型为整型

typedef struct ArcNode{
   int adjvex; /* 指向的顶点的位置 */
   struct ArcNode *nextarc; /* 指向下一条的指针 */
   int info; /* info */
}ArcNode; /* 表结点 */

typedef struct{
   VerTexType data; /* 顶点信息 */
   ArcNode *firstarc; /* 第一个表结点的地址,指向第一条依附该顶点的指针 */
}VNode,AdjList[MVNum]; /* 头结点 */
 
typedef struct{
   AdjList vertices;
   int vexnum,arcnum; /* 图的当前顶点数和线数 */
}ALGraph;

int LocateVex(ALGraph G , VerTexType v){
	//确定点v在G中的位置
	for(int i = 0; i < G.vexnum; ++i)
		if(G.vertices[i].data == v)
			return i;
   return -1;
}//LocateVex

int CreateUDG(ALGraph &G){
    //采用邻接表示法，创建无向图G
	int i , j , k;
	cout <<"请输入总顶点数，总边数，以空格隔开：";
    cin >> G.vexnum >> G.arcnum;	//输入总顶点数，总边数
	cout << endl;
	cout << "输入点的名称，如a" << endl;
  for(i = 0; i < G.vexnum; ++i){
		cout << "请输入第" << (i+1) << "个点的名称:";
		cin >> G.vertices[i].data;         	//依次输入点的信息
        G.vertices[i].firstarc=NULL;
}
	cout << endl;

	cout << "输入对应边依附的顶点，如 a b" << endl;

	for(k = 0; k < G.arcnum;++k){		//构造邻接表
		VerTexType v1 , v2;
		cout << "请输入第" << (k + 1) << "条边依附的顶点:";
		cin >> v1 >> v2;			//输入一条边依附的顶点及权值
		i =LocateVex(G,v1)            ;  j = LocateVex(G,v2);		
        //确定v1和v2在G中的位置，即顶点数组的下标

        ArcNode *p1=new ArcNode;               	//生成一个新的边结点*p1 
		p1->adjvex=j;                   		//邻接点序号为j 
		p1->nextarc= G.vertices[i].firstarc;
        G.vertices[i].firstarc=p1;  
		//将新结点*p1插入顶点vi的边表头部

		ArcNode *p2=new ArcNode;                //生成另一个对称的新的边结点*p2 
		p2->adjvex=i;                   		//邻接点序号为I 
	p2->nextarc= G.vertices[j].firstarc;
        G.vertices[j].firstarc=p2;  
		//将新结点*p2插入顶点vj的边表头部 
	}//for

	return OK;
}//CreateUDG
