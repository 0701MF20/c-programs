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
    printf("Displat of array: ");
    for(i=0;i<noe-1;i++)
    {
      printf("%d",A[i]);
      if(i==0||i<noe-2)
      {
      printf(",");
      }
    }
    getch();
}
