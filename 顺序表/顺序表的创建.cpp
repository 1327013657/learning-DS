#include<stdio.h>
#include <malloc.h>
#define N 10


typedef int ElemType;


/*typedef struct SqList
{
	int iList[N];
	int length;//ʵ�����ݸ���
}Sqlist;
*/
typedef struct SqList
{
	int *pList;
	int length;
	int listSize;  //��¼����ռ��С
}SqList;
int main()
{
	;
}