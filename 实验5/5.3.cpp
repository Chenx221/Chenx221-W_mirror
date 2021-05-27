//实验5-3 BETA

//#include"邻接表.h" //UTF-8下貌似找不到头文件（乱码 
#include"ljb.h"

bool visited[MVNum]={false};		//访问标志数组，其初值为"false"
int FirstAdjVex(ALGraph G , int v);				//返回v的第一个邻接点
int NextAdjVex(ALGraph G , int v , int w);		//返回v相对于w的下一个邻接点

void DFS(ALGraph G, int v){ //从第v个顶点出发递归地深度优先遍历图G
	cout << G.vertices[v].data << "    ";  visited[v] =true;
	ArcNode *p = G.vertices[v].firstarc;
//访问第v个顶点，并置访问标志数组相应分量值为true
	int w;
	while (p!=NULL) {
		int w = p->adjvex; 
		if(!visited[w]) DFS(G,w); //对v的尚未访问的邻接顶点w递归调用DFS
		p = p->nextarc;
	}   
}//DFS

int main(){
	cout << "**深度优先搜索遍历连通图的递归算法**" << endl;
	ALGraph G;VerTexType c;
	CreateUDG(G);
	cout << endl; 

	cout << "请输入遍历连通图的起始点：";
	cin >> c;
	int i;
	for(i = 0 ; i < G.vexnum ; ++i){
		if(c == G.vertices[i].data)
			break;
	}
	cout << endl;
	while(i >= G.vexnum){
		cout << "该点不存在，请重新输入！" << endl;
		cout << "请输入遍历连通图的起始点：";
		cin >> c;
		for(i = 0 ; i < G.vexnum ; ++i){
			if(c == G.vertices[i].data)
				break;
		}
	}

	cout << "深度优先搜索遍历图结果：" << endl;
	DFS(G , i);

	cout <<endl;
	return 0;
}//main
