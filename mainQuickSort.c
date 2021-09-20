#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void partition(int A[],int l,int h)
{
	int pivot=A[l];
	int i,j;
	do
	{
		do{
			i++;
		}while(pivot>=A[i]);
		do
		{
			j--;
		}while(pivot<A[i]);
		swap(&A[i),&A[j]);
	}while(i<j);
	swap(&A[l],&A[j]);
	return j;
}
void quickSort(int A[],int l,int h)
{
	partition(A,l,h);
	quickSort(A,l,j);
	quickSort(A,j+1,h);
}
int main()
{
	int i;
	int A[5]={3,6,4,2,1};
	quickSort(A,0,4);
	for(i=0;i<5;i++)
	{
		printf("%d",A[i]);
	}
	return 0;
}
