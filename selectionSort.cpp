#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void selectSort(int n,int A[])
{
	int k;
	for(int i=0;i<n-1;i++)
	{
		for(int j=k=i;j<n;j++)
		{
			if(A[j]<A[k])
			k=j;
		}
		swap(A[i],A[k]);
	}	
}
int main()
{
	int A[5]={2,4,9,1,9};
	int m=0;
	printf("Original:");
	for(int o=0;o<5;o++)
	{
		if(m==1)
		{
			printf(",");
		}
		printf("%d",A[o]);
		m=1;	
	}
	selectSort(5,A);
	printf("\n");
	m=0;
	printf("After Sorting:");
	for(int o=0;o<5;o++)
	{
			if(m==1)
		{
			printf(",");
		}
		printf("%d",A[o]);
		m=1;	
	}
	return 0;
}
