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
    getch();
}
