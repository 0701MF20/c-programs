//27. WAP to print Fibonacci series using recursive function.
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
  printf("Fibonaci series obtained are:-\n");
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
