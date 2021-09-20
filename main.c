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
    printf("Display of array: ");
    for(i=0;i<6;i++)
    {
        printf("%d",A[i]);
        if(i==0||i<5)
        printf(",");
    }
    getch();
}

