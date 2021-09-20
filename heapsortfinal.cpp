#include<stdio.h>
void swapi(int &a,int &b)
{
	int temp;
	temp=*a;
	*a=*;
	*b=temp;
}
void heapSort(int n,int A[])
{
	int k,i,j;
	for(i=n-1;i>0;i--)
	{
        for(int j=k=i;j>=0;j--)
        {
	if(A[k]<A[j])
	k=j;
	}
	swapi(&A[k],&A[i]);
	}
}
int main()
{
	int A[5]={4,3,2,8,1};
	printf("ORIGINAL:");
	int l=0;
	for(int o=0;o<5;o++)
	{
		if(l==1)
		{
			printf(",");
		}
		printf("%d",A[o]);
		l=1;
	}
	printf("\n");
	heapSort(5,A);
	int m=0;
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

