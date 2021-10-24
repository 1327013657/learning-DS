#include<stdio.h>
#include <malloc.h>
#define InitSize 10

typedef int ElemType;

/*typedef struct SqList
{
	int data[MaxSize];
	int length;//实际数据个数
}Sqlist;
*/

typedef struct 
{
	ElemType *data;
	int length;    //顺序表当前长度
	int MaxSize;  //记录储存空间大小
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
	//依次访问所有元素
	for (int i = 0; i < L.length; i++)
		printf("%d", L.data[i]);
	//确定前驱和后继
	for (int i = 0; i < L.length - 1; i++)
		printf("%d %d", L.data[i], L.data[i + 1]);
}

int main()
{
	SqList L;
	initial(L);
}