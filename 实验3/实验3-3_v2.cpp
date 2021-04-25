/*参考教材算法3.21，设计一个判断表达式括号是否匹配的算法，并编程实现。
文件名：*_实验3-3.cpp 
by Chenx221 (https://chenx221.cyou)
2.1
changelog:
允许多次输入判断括号匹配
*/
#include<stdio.h>
#include"intstack.h"

int main() {
	SqStack S;
	char key;
	int l,flag,trash;
	InitStack(S);
	while (1) {
		//
		flag=0;
		while (!StackEmpty(S)) 
			Pop(S,trash);
		// reset
			
		cout<<"pls type(q:quit): ";
		while ((key=getchar())!='\n') {
			switch (key) {
				case ')':{
					if (GetTop(S)!='(') flag=1;
					Pop(S,l);
					break;
				}
				case ']':{
					if (GetTop(S)!='[') flag=1;
					Pop(S,l);
					break;
				}
				case '}':{
					if (GetTop(S)!='{') flag=1;
					Pop(S,l);
					break;
				}
				case '(':case '[':case '{':{
					Push(S,key);
					break;
				}
				case 'q':
					return 0;
			}
		}
		if (flag || !StackEmpty(S)) cout<<"not match"<<endl;
		else cout<<"match"<<endl;
	}
return 0;
}
