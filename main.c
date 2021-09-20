//28. WAP to swap two numbers using pointers.
#include<stdio.h>
int main()
{
    int *c,*d,a,b,temp;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Value of a and b obtained before swapping:-\n");
    printf("Value of a :%d",a);
    printf("\nValue of b :%d",b);
    c=&a;
    d=&b;
    temp=*c;
    *c=*d;
    *d=temp;
    printf("\nValue a and b obtained after swapping:-");
    printf("\nValue of a :%d",a);
    printf("\nValue of b :%d",b);
    getch();
}
