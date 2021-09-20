#include<stdio.h>
int main()
{
    int A[5][3],i,j,B[3][5];
    printf("Enter the data of 2D Matrix:-\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
   printf("Display the Matrix:-\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",A[i][j]);
            printf(" ");
        }
        printf("\n");
    }
for(i=0;i<5;i++)
{
    for(j=0;j<3;j++)
    {
        B[j][i]=A[i][j];
    }
}
printf("Display of Transpose matrix:-\n");
for(j=0;j<3;j++)
{
    for(i=0;i<5;i++)
    {
        printf("%d",B[j][i]);
        printf(" ");
    }
    printf("\n");
}
getch();
}
