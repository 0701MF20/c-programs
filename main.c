//26. WAP to compute factorial of number using recursion.
#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    return 1;
    else
    {
    if(n>1)
    {
        return factorial(n-1)*n;
    }
    }
}
int main()
{
    int n;
    printf("Enter the data:-\n");
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Factorial of %d is :%d",n,factorial(n));
    getch();
}
