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
    getch();
}
