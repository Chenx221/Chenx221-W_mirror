//实验5-4 图的广度优先遍历

//#include"邻接矩阵.h" //UTF-8下貌似找不到头文件（乱码 
#include"ljjz.h"
#define MAXQSIZE 100						//最大队列长度
#define ERROR -1 //error code

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
	Q.front = Q.rear = 0; //空队列头尾初始化
}//InitQueue

void EnQueue(sqQueue &Q, ArcType e){
	//插入元素e为Q的新的队尾元素
	if((Q.rear + 1) % MAXQSIZE == Q.front)
		return; 
	Q.base[Q.rear] = e; //插入e到队列
	Q.rear = (Q.rear + 1) % MAXQSIZE; 
	//循环队列，头+1
}//EnQueue

bool QueueEmpty(sqQueue Q){
	//判空
	if(Q.rear == Q.front)
		return true;
	return false;
}//QueueEmpty

void DeQueue(sqQueue &Q, ArcType &u){
	//出队到u 
	u = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXQSIZE;
}//DeQueue   								
//--------------------------------------------------
void BFS (AMGraph G, int v){ 
    //按广度优先非递归遍历连通图G 
	sqQueue Q; //*base front rear
	ArcType u; //int u
	ArcType w; //int w

    cout << G.vexs[v] << "  ";    visited[v] = true;     						//print起始点，并标记visited
    InitQueue(Q); 	//申请内存空间（for 队列Q）    
    EnQueue(Q, v);   //插入元素v到Q队列   

    while(!QueueEmpty(Q)){ //队列非空   													
		DeQueue(Q, u);  //队头元素出队并置为u     												
		for(w = FirstAdjVex(G, u); w >= 0; w = NextAdjVex(G, u, w)){
			if(!visited[w]){ //判w是否访问过
				cout << G.vexs[w] << "  ";
				visited[w] = true; 
				EnQueue(Q, w); //w进队 
			}
		}
    }
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

int NextAdjVex(AMGraph G , int v , int w) //从上一次的位置w继续寻找下一个邻接点
{
	int i;
	for(i = w ; i < G.vexnum ; ++i){
		if(G.arcs[v][i] != MaxInt && visited[i] == false)
			return i;
	}
	return -1;
}//NextAdjVex

int main(){
	cout << "**图的广度优先遍历**" << endl;
	AMGraph G;
	CreateUDN(G);
	cout << endl;                
	VerTexType c;

 	int i;
	do{
		cout << "请输入遍历连通图的起始点：";
		cin >> c;
		i=LocateVex(G,c);  
     if(i<0)
			cout << "该点不存在，请重新输入！" << endl;
	}while(i<0);//输入起始点给i
	
	cout << "广度优先搜索遍历连通图结果：" << endl;
	BFS(G,i);
	cout <<endl;
	return 0;
}//main
