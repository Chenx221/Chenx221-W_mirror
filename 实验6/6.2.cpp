//6.2 动态查找表
//6/11/2021 By Chenx221 (chenx221.cyou)

#include<iostream>
using namespace std;
#define ENDFLAG '#'

typedef struct ElemType{
    char key;
}ElemType;

typedef struct BSTNode{
    ElemType data;
    BSTNode *lc,*rc;
}BSTNode,*BSTree;

void InsertBST(BSTree &T,ElemType e) {
    if (!T) {
        BSTree S = new BSTNode;
        S->data = e;
        S->lc = S->rc =NULL;
        T = S;
    }
    else if (e.key > T->data.key)
        InsertBST(T->rc,e);
    else if (e.key < T->data.key)
        InsertBST(T->lc,e);
}

void CreateBST(BSTree &T) {
    T= NULL;
    ElemType e;
    cin >> e.key;
    while (e.key !=ENDFLAG) {
        InsertBST(T,e);
        cin >> e.key;
    }
}

BSTree SearchBST(BSTree T,char key) {
    if (!T) return T;
    else if (key == T->data.key) return T;
    else if (key < T->data.key) return SearchBST(T->lc,key);
    else return SearchBST(T->rc,key);
}

int main(){
    BSTree T;
    cout <<"请输入数据 #结尾"<<endl;
    CreateBST(T);
    char key;
    cout <<"请输入待查找数据"<<endl;
    cin >> key;
    BSTree result = SearchBST(T,key);
    if (result) cout<<"Found";
    else cout<<"Not found";

    return 0;
}
