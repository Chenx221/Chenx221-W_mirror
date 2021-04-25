/*
	Name: 实验2-2 
	Copyright: 
	Author: chenx221(chenx221.cyou)
	Date: 22/03/21 19:45
	Description: 线性表的链式存储结构。阅读下面程序，在横线处填写欠缺内容，并补充函数的基本功能注释。运行程序，写出结果（运行截图）。请将本题文件命名为："学号 姓名 实验2-2.cpp"
*/

#include<stdio.h>
#include<malloc.h>

#define ERROR 0
#define OK 1
typedef int ElemType; /*定义表元素的类型*/
typedef int Status;


typedef struct LNode {  /*线性表的循环单链表存储*/
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

LinkList CreateList(int n); /*建立带头结点的循环单链表*/
void PrintList(LinkList L); /*打印数据表*/
int GetElem(LinkList L, int i, ElemType &e); /*获取指定位置的数据表*/

LinkList CreateList(int n) {
    LNode *p, *q, *head;
    int i;
    head = (LinkList) malloc(sizeof(LNode));
    head->next = head;
    p = head;
    for (i = 0; i < n; i++) {
        q = (LinkList) malloc(sizeof(LNode));
        printf("input data %i:", i + 1);
        scanf("%d", &q->data);            /*输入元素值*/
        p->next = q;                       /*新结点连在表末尾*/
        p = q;
    }
    q->next = head;
    return head;
}/*CreateList*/

void PrintList(LinkList L) {
    LNode *p;
    //#debug printf("[DEBUG] %5p  %d     %p\n",L,L->data,L->next);
    p = L->next;  /*p指向单链表的第1个元素*/
    while (p != L) {
        printf("%5p  %d     %p\n", p, p->data, p->next);
        p = p->next;
    }
}/*PrintList*/

int GetElem(LinkList L, int i, ElemType &e) {
    LNode *p;
    int j = 1;
    p = L->next;
    //debug printf("[DEBUG] %d",p->data);
    while (p != L && j < i) {
        p = p->next;
        j++;
        //debug printf("[DEBUG] %d",p->data);
    }
    if (p == L) {
        //debug printf("[DEBUG]");
        return ERROR;
    }
    e = p->data;
    return OK;
}/*GetElem*/

int ListLength(LinkList L) {
    LNode *p;
    int llength = 0;
    p = L->next;  /*p指向单链表的第1个元素*/
    while (p != L) {
        llength++;
        p = p->next;
    }
    return llength;
}

Status ListInsert(LinkList &L, int i, ElemType e) {//i不能小于1， <6
    int k = 0;
    LNode *pp = L, *temp;//, *t;
    //debug return 0;
    if (i<1) return ERROR; 
    while (k < i - 1) {
        pp = pp->next;
        if (pp==L) return ERROR; 
        k++;
    }
    temp = (LinkList) malloc(sizeof(LNode));
    temp->next = pp->next;
    temp->data = e;
    pp->next = temp;
    
    return OK;
}

Status ListDelete(LinkList &L, int i, ElemType &e) {
    int k = 0;
    LNode *pp = L, *ppp;
    if (i<1) return ERROR; 
    while (k < i - 1) {
        pp = pp->next;
        if (pp==L) return ERROR; 
        k++;
    }
    ppp=pp->next;
    e=ppp->data;
    pp->next = ppp->next;
    free(ppp);
    return OK;
}

int main() {
    int n, i, temp, temp2;
    ElemType e;
    LinkList L = NULL;            /*定义指向单链表的指针*/
    printf("please input n:");  /*输入单链表的元素个数*/
    scanf("%d", &n);
    if (n > 0) {
        printf("\n1-Create LinkList:\n");
        L = CreateList(n);
        printf("\n2-Print LinkList:\n");
        PrintList(L);
        printf("\n3-GetElem from LinkList:\n");
        printf("input i=");
        scanf("%d", &i);
        if (GetElem(L, i, e))
            printf("No%i is %d", i, e);
        else
            printf("not exists");
        printf("\n4-The length of the current list:%d\n", ListLength(L));
        PrintList(L);
        printf("\n5-Insert data to the specified location:(Ex: Location,Value)\n");
        scanf("%d,%d", &temp, &temp2);
        //printf("DEBUG1\n");
        ListInsert(L, temp, temp2);
        PrintList(L);

        printf("\n6-Delete the data at the specified location:(Ex: Location)\n");
        scanf("%d", &temp);
        ListDelete(L, temp, e);
        PrintList(L);


    } else
        printf("ERROR");
    return 0;
}
