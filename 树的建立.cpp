#include<stdio.h>
#include<malloc.h>
//#include<iostream>
//using namespace std;
//算法思想：先读入根节点数据并创建根节点，再读入左子树并创建，读入右子树并创建，返回根节点
typedef char ElemType;
typedef struct BiTNode
{
	ElemType data;
	struct BiTNode* lchild, * rchild;
}BiTNode, * BiTree;//Node代表根节点，BiTree代表一整个树
BiTNode* createBiTree()//创建一棵树
{
	BiTNode* T = NULL;
	ElemType enter;
	enter = getchar();//如果读入空格就结束输入
	if ('@' != enter)
	{
		T = (BiTNode*)malloc(sizeof(BiTNode));
		T->data = enter;
		T->lchild = createBiTree();
		T->rchild = createBiTree();
	}
	return T;
}
void preOrder(BiTree T)
{
	if (T != NULL)
	{
		printf("%c", T->data);
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
}
int main()
{
	BiTree T = createBiTree();
	preOrder(T);
	//system("pause");
}