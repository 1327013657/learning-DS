#include<stdio.h>
#include <malloc.h>
#define InitSize 10

typedef int ElemType;

/*typedef struct SqList
{
	int data[MaxSize];
	int length;//ʵ�����ݸ���
}Sqlist;
*/

typedef struct 
{
	ElemType *data;
	int length;    //˳���ǰ����
	int MaxSize;  //��¼����ռ��С
}SqList;

void initial(SqList& L)
{
	L.data = (ElemType *)malloc(sizeof(ElemType) * InitSize);
	L.MaxSize = InitSize;
	L.length = 0;
}

void indexTrouble()   
{
	SqList L;
	//���η�������Ԫ��
	for (int i = 0; i < L.length; i++)
		printf("%d", L.data[i]);
	//ȷ��ǰ���ͺ��
	for (int i = 0; i < L.length - 1; i++)
		printf("%d %d", L.data[i], L.data[i + 1]);
}

int main()
{
	SqList L;
	initial(L);
}