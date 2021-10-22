#include<stdio.h>
#include<malloc.h>
//#include<iostream>
//using namespace std;
//�㷨˼�룺�ȶ�����ڵ����ݲ��������ڵ㣬�ٶ��������������������������������������ظ��ڵ�
typedef char ElemType;
typedef struct BiTNode
{
	ElemType data;
	struct BiTNode* lchild, * rchild;
}BiTNode, * BiTree;//Node������ڵ㣬BiTree����һ������
BiTNode* createBiTree()//����һ����
{
	BiTNode* T = NULL;
	ElemType enter;
	enter = getchar();//�������ո�ͽ�������
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