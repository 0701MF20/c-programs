#include <stdio.h>
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void bubbleSort(int n,int A[])
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(A[j]>A[j+1])
			swap(A[j],A[j+1]);
		}
	}
}
int main() 
{
	int A[5]={2,7,4,3,1};
	int i;
	int m=0;
	for(i=0;i<5;i++)
	{
		if(m==1)
		{
			printf(",");
		}
		printf("%d",A[i]);
		m=1;
	}
	printf("\n");
	bubbleSort(5,A);
	int k;
	int l=0;
	for(i=0;i<5;i++)
	{
		if(l==1)
		{
			printf(",");
		}
		printf("%d",A[i]);
		l=1;
	}
	return 0;
}
