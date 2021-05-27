//实验5-2 深度优先搜索遍历连通图的递归算法（邻接矩阵存储）

//#include"邻接矩阵.h" //UTF-8下貌似找不到头文件（乱码 
#include"ljjz.h"
#define MAXQSIZE 100						//最大队列长度
bool visited[MVNum]={false};		//访问标志数组，其初值为"false"
int FirstAdjVex(AMGraph G , int v);				//返回v的第一个邻接点
int NextAdjVex(AMGraph G , int v , int w);		//返回v相对于w的下一个邻接点
//----队列的定义及操作--------
typedef struct{
	ArcType *base;							//初始化的动态分配存储空间
	int front;								//头指针，若队列不空，指向队头元素
	int rear;								//尾指针，若队列不空，指向队尾元素的下一个位置
}sqQueue;

void InitQueue(sqQueue &Q){
	//构造一个空队列Q
	Q.base = new ArcType[MAXQSIZE];
	if(!Q.base)     exit(1);				//存储分配失败
	Q.front = Q.rear = 0;
}//InitQueue

void EnQueue(sqQueue &Q, ArcType e){
	//插入元素e为Q的新的队尾元素
	if((Q.rear + 1) % MAXQSIZE == Q.front)
		return;
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXQSIZE;
}//EnQueue

bool QueueEmpty(sqQueue Q){
	//判断是否为空队
	if(Q.rear == Q.front)
		return true;
	return false;
}//QueueEmpty

void DeQueue(sqQueue &Q, ArcType &u){
	//队头元素出队并置为u 
	u = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXQSIZE;
}//DeQueue   								
//--------------------------------------------------
void BFS (AMGraph G, int v){ 
    //按广度优先非递归遍历连通图G 
	sqQueue Q;
	ArcType u;
	ArcType w;

    cout << G.vexs[v] << "  ";    visited[v] = true;     						//访问第v个顶点，并置访问标志数组相应分量值为true 
    InitQueue(Q);              													//辅助队列Q初始化，置空         
    EnQueue(Q, v);            													//v进队 
    while(!QueueEmpty(Q)){   													//队列非空 
		DeQueue(Q, u);       													//队头元素出队并置为u
		for(w = FirstAdjVex(G, u); w >= 0; w = NextAdjVex(G, u, w)){
			//依次检查u的所有邻接点w ，FirstAdjVex(G, u)表示u的第一个邻接点 
			//NextAdjVex(G, u, w)表示u相对于w的下一个邻接点，w≥0表示存在邻接点 
			if(!visited[w]){	           										//w为u的尚未访问的邻接顶点 
				cout << G.vexs[w] << "  ";   visited[w] = true;					//访问w，并置访问标志数组相应分量值为true 
				EnQueue(Q, w);													//w进队 
			}//if 
		}//for
    }//while 
}//BFS 

int FirstAdjVex(AMGraph G , int v) //求v的第一个未被访问过的邻接点
{
	int i;
	for(i = 0 ; i < G.vexnum ; ++i){
		if(G.arcs[v][i] !=MaxInt&& visited[i] == false)
			return i;
	}
	return -1;
}//FirstAdjVex

int NextAdjVex(AMGraph G , int v , int w) //v相对于w的下一个未被访问过的邻接点
{
	int i;
	for(i = w ; i < G.vexnum ; ++i){
		if(G.arcs[v][i] != MaxInt && visited[i] == false)
			return i;
	}
	return -1;
}//NextAdjVex

int main(){
	cout << "**深度优先搜索遍历连通图的递归算法**" << endl;
	AMGraph G;
	CreateUDN(G);
	cout << endl;                
	VerTexType c;
 	int i;
	do{
		cout << "请输入遍历连通图的起始点：";
		cin >> c;
		i=LocateVex(G,c);  //求顶点c的序号
     if(i<0)
			cout << "该点不存在，请重新输入！" << endl;
	}while(i<0);
	
	cout << "深度优先搜索遍历连通图结果：" << endl;
	BFS(G,i);
	cout <<endl;
	return 0;
}//main
