#include <stdio.h>
int main()
{
int A[5][3],sum,i,j;
printf("Enter the record:-\n");
for(i=0;i<5;i++)
{
    printf("Enter the sales of 3 item by salesman %d is :-\n",i+1);
    for(j=0;j<3;j++)
    {
    scanf("%d",&A[i][j]);
    }
}
for(i=0;i<5;i++)
{
    sum=0;
    for(j=0;j<3;j++)
    {
    sum=sum+A[i][j];
    }
    printf("Total sales of salesman %d is %d",i+1,sum);
    printf("\n");
}

for(j=0;j<3;j++)
{
    sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+A[i][j];
    }
     printf("Total sales of item %d is %d",j+1,sum);
     printf("\n");

}
getch();
}
