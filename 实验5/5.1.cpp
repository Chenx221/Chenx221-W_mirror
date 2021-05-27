//Name:实验5-1 采用邻接矩阵表示法创建无向网并输出和统计各个结点的度
//By Chenx221 (chenx221.cyou)
//mirror: https://git.chenx221.cyou/chenx221/Chenx221-W/src/branch/main/%E5%AE%9E%E9%AA%8C5

//#include"邻接矩阵.h" //UTF-8下貌似找不到头文件（乱码 
#include"ljjz.h"

int main() {
    cout << "****采用邻接矩阵表示法创建无向网****" << endl;
    AMGraph G;
    CreateUDN(G);
    cout << endl;
    cout << "该图的邻接矩阵如下：" << endl;
    PrtAMGraph(G);
    cout << endl << "*****各个顶点的度：*****" << endl;
    for (int i = 0; i < G.vexnum; i++) {
        printf("第%d个顶点 %c 的度：%d\n", i, G.vexs[i], Degree(G, i));
    }
    return 0;
}//main
