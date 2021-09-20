/*#include<stdio.h>
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
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Factorial of n :%d",factorial(n));
    getch();
}
*/
/*
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
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Factorial of n is :%d",factorial(n));
    getch();
}
*/
/*
#include<stdio.h>
int fib(int n)
{
    if(n==1||n==0)
    return n;
    else
    {
        return fib(n-1)+fib(n-2);
    }

}
int main()
{
  int n;
  printf("Enter the value of n :");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
  printf("%d",fib(i));
  if(i<(n-1))
  {
      printf(",");
  }
  }
  getch();
}
*/
/*#include<stdio.h>
int main()
{
    int *c,*d,a,b,temp;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    c=&a;
    d=&b;
    temp=*c;
    *c=*d;
    *d=temp;
    printf("Value a and b obtained after swapping:-");
    printf("\nValue of a :%d",a);
    printf("\nValue of b :%d",b);
    getch();
}
*/
