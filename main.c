//25. WAP to compute factorial of numbers using function.
#include<stdio.h>
int factorial(int n)
{
    int i;
    int fact=1;
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the data:-\n");
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Factorial of %d :%d",n,factorial(n));
    getch();
}

