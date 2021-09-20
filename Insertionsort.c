#include <stdio.h>
#include <stdlib.h>
void insertionSort(int n,int A[])
{
	int i;
	for(i=0;i<n;i++)
	{
		int x;
		int j=i-1;
		x=A[i];
		while(j>=0 && A[j]>x)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=x;
	}
}
int main() 
{
	int A[5]={4,6,1,3,6};
	int m=0,i;
	printf("Original:");
	for(i=0;i<5;i++)
	{
		if(m==1)
		{
			printf(",");
		}
		printf("%d",A[i]);
		m=1;
	}
	printf("\nAfter sorting:");
	insertionSort(5,A);
	int l=0,k;
	for(k=0;k<5;k++)
	{
		if(l==1)
		{
			printf(",");
		}
		printf("%d",A[k]);
		l=1;
	}
		getch();
	return 0;
}
