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
	int *pList;
	int length;
	int listSize;  //记录储存空间大小
}SqList;
int main()
{
	;
}