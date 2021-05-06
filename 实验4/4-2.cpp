/*在上题中补充完成求二叉树中求结点总数算法，并在主函数中补充相应的调用验证正确性
文件名：*_实验4-2.cpp
by Chenx221 (https://chenx221.cyou)
*/
#include<stdio.h>
#include<malloc.h>

typedef struct BTNode {       /*结点结构声明*/
    char data;               /*结点数据*/
    struct BTNode *lchild;
    struct BTNode *rchild;  /*指针*/
} *BiTree;

int createBiTree(BiTree &t) { /* !先序遍历创建二叉树*/
    char s;
    BiTree q;
    s = getchar();
    if (s == '.') { //空树 
        t = NULL;
        return 1;
    }
    q = (BiTree) malloc(sizeof(struct BTNode));
    if (q == NULL) { //内存分配失败 
        printf("Memory alloc failure!");
        return 0;
    }
    q->data = s;
    t = q;
    createBiTree(q->lchild); /*递归建立左子树*/
    createBiTree(q->rchild); /*递归建立右子树*/
    return 1;
}

void PreOrder(BiTree p) {  /* 先序遍历二叉树*/
    if (p != NULL) {
        printf("%c", p->data);
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}

void InOrder(BiTree p) {  /* 中序遍历二叉树*/
    if (p != NULL) {
        InOrder(p->lchild);
        printf("%c", p->data);
        InOrder(p->rchild);
    }
}

void PostOrder(BiTree p) {  /* 后序遍历二叉树*/
    if (p != NULL) {
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        printf("%c", p->data);
    }
}

void release(BiTree t) { /*释放二叉树空间*/
    if (t != NULL) {
        release(t->lchild);
        release(t->rchild);
        free(t);
    }
}


int nodenum(BiTree p) {  //求二叉树结点数

    int n;
    if (p != NULL) {
        n = 1;
        n += nodenum(p->lchild);
        n += nodenum(p->rchild);
    } else n = 0;
    return n;
}

/*
int leafnum(BiTree p)  //求二叉树叶子结点数

{int n0;
 if(p==NULL) n0=0; //空树 
 else
  	if(p->lchild==NULL && p->rchild==NULL) //无左右子 即为叶子结点 
	   	n0=n0+1; 
  	else
	   	n0=leafnum(p->lchild)+               ;
 return  n0;
}

int depth(BiTree p)   //求二叉树深度

{int d1,d2;
 if(p==NULL) return 0;
 else
  {d1=       ;
   d2=       ;
   return        ;
  }
}
*/

int main() {
    BiTree t = NULL;
    printf("\nplease input data:(用.表示空树)");
    createBiTree(t); //创建二叉树，先序遍历传入数据 
    printf("\n\nPreOrder the tree is:");
    PreOrder(t); //先序输出 
    printf("\n\nInOrder the tree is:");
    InOrder(t); //中 
    printf("\n\nPostOrder the tree is:");
    PostOrder(t); //后 
    printf("\n该二叉树有%d个结点\n", nodenum(t));
    /*
       printf("\n该二叉树有%d个叶子结点\n",leafnum(t));
   printf("\n该二叉树的深度为%d\n",depth(t));
   */
    release(t); //释放 
    return 0;
}
