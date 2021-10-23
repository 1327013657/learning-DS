#include<stdio.h>
#include <malloc.h>
#define N 10

typedef int ElemType;

/*typedef struct SqList
{
	int iList[N];
	int length;//实际数据个数
}Sqlist;
*/
typedef struct SqList
{
	ElemType *pList;
	int length;
	int listSize;  //记录储存空间大小
}SqList;
void initial(SqList& L)
{
	L.pList = (ElemType *)malloc(sizeof(ElemType) * N);
	L.listSize = N;
	L.length = 0;
}
int main()
{
	SqList L;
	initial(L);
}