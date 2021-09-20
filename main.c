#include<stdio.h>
int main()
{
    int A[6][6],B[6][6],C[6][6],i,j,m,n;
    printf("Enter the value of m :");
    scanf("%d",&m);
    printf("Enter the value of n :");
    scanf("%d",&n);
        printf("Enter the data in matrix A:-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
       {
            scanf("%d",&A[i][j]);
       }
    }
    printf("Display the matrix A:-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",A[i][j]);
            printf(" ");
        }
        printf("\n");
    }

        printf("Enter the data in matrix B:-\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&B[i][j]);
            }

        }
        printf("Display the matrix B:-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",B[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("Display of sum of matrix A and B:-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",C[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    getch();
}
