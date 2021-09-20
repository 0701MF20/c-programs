#include <stdio.h>
#include<stdlib.h>
#include<time.h>//time
#include<unistd.h>//for sleep
#define size 10
//shell sort 
void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}
void ShellSort(int A[],int n)
{
int gap,i,j,temp;
for(gap=n/2;gap>=1;gap/=2)
{
for(i=gap;i<n;i++)
{
temp=A[i];
j=i-gap;
while(j>=0 && A[j]>temp)
{
A[j+gap]=A[j];
j=j-gap;
}
A[j+gap]=temp;
}
}
}
//radix sort starting
int getMax(int A[],int n)
{
	int i;
	int max=A[0];
	for(i=1;i<n;i++)
	{
	if(max<A[i])
	{
		max=A[i];
	}
    }
    return max;
}
void countSort(int A[],int n,int exp)
{
	int op[n],i,count[10]={0};
	for(i=0;i<n;i++)
	{
	  count[(A[i]/exp)%10]++;
	}
	for(i=1;i<10;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		op[count[(A[i]/exp)%10]-1]=A[i];
		count[(A[i]/exp)%10]--;
	}
	for(i=0;i<n;i++)
	{
		A[i]=op[i];
	}
}
void radixsort(int A[],int n)
{
int exp,m;
m=getMax(A,n);
for(exp=1;m/exp>0;exp*=10)
{
countSort(A,n,exp);	
}	
}
//merge sort
void merge(int A[],int lb,int mid,int up)
{
 int i,j,k,p,x;
 int b[up+1];
 i=lb,j=mid+1,k=lb;
while(i<=mid&&j<=up)
{
if(A[i]<=A[j])
{
b[k]=A[i];
i++;	
}	
else
{
	b[k]=A[j];
	j++;
}
k++;
}
if(i>mid)
{
	while(j<=up)
	{
		b[k]=A[j];
		j++;
		k++;
	}
}
else
{
	while(i<=mid)
	{
		b[k]=A[i];
		i++;
		k++;
	}
}
	for(k=lb;k<=up;k++)
	{
		A[k]=b[k];
	}
}
void mergesort(int A[],int lb,int up)
{
	int mid;
	if(lb<up)
	{
		mid=(lb+up)/2;
		mergesort(A,lb,mid);
		mergesort(A,mid+1,up);
		merge(A,lb,mid,up);
	}
}
//insertion sort start-corrected
void insertionSort(int n,int A[])
{
   int i,k;
   for(i=1;i<n;i++)
   {
   	printf("\nParse %d:-\n",i);
	int x;
	int j=i-1;
	x=A[i];
	while(j>-1&& A[j]>x)
	{
	A[j+1]=A[j];
	j--;
   }
   A[j+1]=x;
  for(k=0;k<n;k++)
  {
  	printf("%d",A[k]);
  	if(k<n-1)
  	{
  		printf(",");
	  }
  }
 }
}
//Quick sort 
int partition(int A[],int l,int h)
{
int pivot=A[l];
int i=l,j=h;
do
{
do
{
i++;
}while(A[i]<=pivot);
do
{
j--;
}while(A[j]>pivot);
if(i<j)
swap(&A[i],&A[j]);
}while(i<j);
swap(&A[l],&A[j]);
return j;
}
void QuickSort(int A[],int l,int h)
{
int j;
if(l<h)
{
j=partition(A,l,h);
QuickSort(A,l,j);
QuickSort(A,j+1,h);
}
}
//bubble sort -corrected
void bubbleSort(int n,int A[])
{
 time_t start, end;
int i,k,j;
 time(&start);
for(i=0;i<n-1;i++)
{
	
for(j=0;j<n-1-i;j++)
{
if(A[j]>A[j+1])
swap(&A[j],&A[j+1]);
}
printf("Pass %d :\n",i);
for(k=0;k<n;k++)
{
	printf("%d",A[k]);
	if(k<n-1)
	printf(",");
}
printf("\n");
}
 time(&end);
 float time=(float)end-start;
printf("\nRuntime: %f",time);
}
//selection sort start
void selectSort(int n,int A[])
{
  int k,i,j;
  for(i=0;i<n-1;i++)
  {
	for(j=k=i;j<n;j++)
	{
	 if(A[j]<A[k])
	 k=j;
	}
	swap(&A[i],&A[k]);
  }	
}
//heapSort
void heapSort(int n,int A[])
{
  int k,i,j;
  for(i=n-1;i>0;i--)
  {
   for(j=k=i;j>=0;j--)
   {
	if(A[k]<A[j])
	k=j;
   }
   swap(&A[k],&A[i]);
  }
}
//selection sort 
void exchangeSort(int A[],int n)
{
  int i,j,temp;
  for(i=0;i<(n-1);i++)
  {
   for(j=(i+1);j<n;j++)
   {
	if(A[i]<A[j])
	{
	   swap(&A[i],&A[j]);
	}
   }
  }
}
//Bucket sort
void bucketSort(int A[],int n)
{
int i,j,k,bucket[size];
for(i=0;i<size;++i)
{
bucket[i]=0;
}
for(i=0;i<n;i++)
{
++bucket[A[i]];
}
for(i=0,j=0;j<size;++j)
{
for(k=bucket[j];k>0;--k)
{
A[i++]=j;
}
}
}
int main()
{
int n,i,j,c,p=1;
printf("Enter the size of array: ");
scanf("%d",&n);
int A[n];
printf("Enter the elements in array :-\n");
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
 printf("\nArray before sorting:-\n");
for(j=0;j<n;j++)
{
printf("%d ",A[j]);
}
while(p)
{
printf("\nMENU");
printf("\n1.Shell Sort");
printf("\n2.Radix Sort");
printf("\n3.Merge Sort");
printf("\n4.Insertion Sort");
printf("\n5.Quick Sort");
printf("\n6.Bubble Sort");
printf("\n7.Selection Sort");
printf("\n8.Heap Sort");
printf("\n9.Exchange Sort");
printf("\n10.Bucket Sort");
printf("\nEnter the choice: ");
scanf("%d",&c);
switch(c)
{
case 1:
ShellSort(A,n);//shell sort 
printf("Sorted array :-\n");
for(j=0;j<n;j++)
printf("%d ",A[j]);
printf("\n");
break;
case 2:
radixsort(A,n);  //radix sort
printf("\nSorted Array:-\n");
for(j=0;j<n;j++)
{
printf("%d ",A[j]);
}
break;
case 3:
mergesort(A,0,n-1);//merge sort
printf("\nSorted array:-\n");
for(j=0;j<n;j++)
{
printf("%d ",A[j]);
}
break;
case 4:
insertionSort(n,A);//insertion sort
printf("\nSorted array:-\n");
for(j=0;j<n;j++)
{
printf("%d ",A[j]);
}
break;
case 5://quick sort
QuickSort(A,0,n);
printf("\nSorted array:-\n");
for(j=0;j<n;j++)
{
printf("%d ",A[j]);
}
break;	
case 6://bubble sort
bubbleSort(n,A);
printf("\nSorted array:-\n");
for(j=0;j<n;j++)
{
  printf("%d ",A[j]);
}
break;
case 7://selection sort	
selectSort(n,A);
printf("\nSorted array:-\n");
for(j=0;j<n;j++)
{
 printf("%d ",A[j]);
}
break;
case 8:
heapSort(n,A);//heap sort
printf("\nSorted array:-\n");
for(j=0;j<n;j++)
{
printf("%d ",A[j]);
}
break;
case 9:
exchangeSort(A,n);//exchange sort
printf("\nSorted Array:-\n");
for(i=(n-1);i>=0;i--)
{
 printf("%d ",A[i]);
}
break;
case 10:
bucketSort(A,n);//bucket sort
printf("\nSorted array:-\n");
for(j=0;j<n;j++)
{
printf("%d ",A[j]);
}
break;
default:
printf("\nInvalid Choice!!!");
}
printf("\nDo you want to continue then press any integer value other than 0: ");
scanf("%d",&p);
}
getch();
return 0;
}


