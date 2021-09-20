#include<stdlib.h>
#include<stdio.h>
int main()
{
    int A[5],i,item,ub=4,lb=0,mid,x;
    printf("Enter 1 for ascending order and 2 for descending order :");
    scanf("%d",&x);
    printf("Enter the element in the array :-\n");
    for(i=0;i<5;i++)
    {
        printf("Element entered at the index %d is ",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the elements to be searched: ");
    scanf("\n%d",&item);
    if(x==1)
    {
    for(i=0;i<5;i++)
    {
        if(ub>=lb)
        {
            mid=(lb+ub)/2;
            if(A[mid]==item)
            {
             printf("Element found at the index: %d",mid);
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
    else
    {
         for(i=0;i<5;i++)
    {
        if(ub>=lb)
        {
            mid=(lb+ub)/2;
            if(A[mid]==item)
            {
             printf("Element found at the index: %d",mid);
             break;
            }
            else if(A[i]>item)
            lb=mid+1;
            else
            ub=mid-1;
        }
    }
    if(A[mid]!=item)
    printf("Element not found in the array");
    }
    getch();
}
