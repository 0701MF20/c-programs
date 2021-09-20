/*#include <stdlib.h>
#include <stdio.h>
int main()
{
    int A[7];
    int x,i,y=-1,noe=6;
    printf("Enter the elements in the array:-\n");
    for(i=0;i<noe;i++)
    {
        printf("Element entered at the index %d is ",i);
        scanf("%d",&A[i]);
    }
    printf("Element to search in array:");
    scanf("%d",&x);
    for(i=0;i<noe;i++)
    {
        if(A[i]==x)
        {
          y=1;
          printf("Element is found in the array at index is %d",i);
          break;
        }
    }
    if(y==-1)
    printf("Element is not found in the given array");
}
*/
/*
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int A[5],i,item,ub=4,lb=0,mid;
    printf("Enter the element in the array :-\n");
    for(i=0;i<5;i++)
    {
        printf("Element entered at the position %d is ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Enter the elements to be searched: ");
    scanf("\n%d",&item);
    for(i=0;i<5;i++)
    {
        if(ub>=lb)
        {
            mid=(lb+ub)/2;
            if(A[mid]==item)
            {
             printf("Element found at position : %d",mid+1);
             break;
            }
            else if(A[i]<item)
            lb=mid+1;
            else
            ub=mid-1;
        }
    }
    if(A[mid]!=item)
    printf("Element not found in the array");
}
*/
/*
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,index,item,noe=6;
    int A[7];
    printf("Entered the element in array:-\n");
    for(i=0;i<noe;i++)
    {
        printf("Element entered at the index %d is ",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be inserted in array :");
    scanf("%d",&item);
    printf("Enter the index at which element is added in the array :");
    scanf("%d",&index);
    for(i=noe-1;i>=index;i--)
    {
        A[i+1]=A[i];
    }
    A[index]=item;
    printf("Display of array after inserting the element in the given index :");
    for(i=0;i<7;i++)
    {
        printf("%d",A[i]);
        if(i==0||i<6)
        printf(",");
    }
}
*/
/*
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,item,noe=5;
    int A[6],x;
    printf("Enter the element in sorted format :");
    printf("\nEnter 1 for ascending or 2 for descending :");
    scanf("%d",&x);
    printf("Entered the element in array:-\n");
    for(i=0;i<noe;i++)
    {
        printf("Element entered at the index %d is ",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be inserted in array :");
    scanf("%d",&item);
    if(x==1)
    {
      for(i=noe-1;i>=0;i--)
      {
        if(A[i]>item)
            A[i+1]=A[i];
        else
        {
            A[i+1]=item;
            break;
        }
      }
    }
     else if(x==2)
    {
     for(i=noe-1;i>=0;i--)
     {
        if(A[i]<item)
        A[i+1]=A[i];
        else
        {
          A[i+1]=item;
          break;
        }
     }
    }
    for(i=0;i<6;i++)
    {
        printf("%d",A[i]);
        if(i==0||i<5)
        printf(",");
    }
}

*/
/*
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,item,noe=5,index;
    int A[6];
    printf("Entered the element in array:-\n");
    for(i=0;i<noe;i++)
    {
        printf("Element entered at the index %d is ",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be deleted in array :");
    scanf("%d",&item);
    for(i=0;i<noe;i++)
    {
       if(A[i]==item)
        index=i;
    }
    for(i=index;i<noe;i++)
    {
        A[i]=A[i+1];
    }
    for(i=0;i<noe-1;i++)
    {
      printf("%d",A[i]);
      if(i==0||i<noe-2)
      {
      printf(",");
      }
    }
}
*/
/*
#include<stdlib.h>
#include<stdio.h>
int main()
{
   int i,j,item,noe=5,index,y=-1;
    int A[6];
    printf("Entered the element in array:-\n");
    for(i=0;i<noe;i++)
    {
        printf("Element entered at the index %d is ",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<noe-1;i++)
    {
      for(j=1+i;j<noe;j++)
      {
        if(A[i]==A[j])
        {
            y=1;
            printf("Duplicate element in the array is %d\n",A[i]);
            break;
        }
      }
    }
    if(y==-1)
    {
      printf("No duplicate element is present in sorted array");
    }
}
*/
