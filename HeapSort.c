#include<stdio.h>
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void heapSort(int n,int A[])
{
	int k;
	for(int i=n-1;i>0;i--)
	{
		for(int j=k=i;j>=0;j--)
		{
			if(A[k]<A[j])
			k=j;
		}
		swapi(A[k],A[i]);
	}
}
int main()
{
	int A[5]={4,3,2,8,1};
	heapSort(5,A);
	for(int o=0;o<5;o++)
	{
		printf("%d",A[o]);
	}
	return 0;
}

