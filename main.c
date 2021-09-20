#include <stdlib.h>
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
    getch();      //    I have used getch so that i can hold the screen for obtaining result
}
