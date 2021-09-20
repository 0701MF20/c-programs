//To multiply single characters of the matrix
#include <stdio.h>
void func(int ax, int ay, int bx, int by)
{

    int a[ax][ay], b[bx][by], c[ax][by], i, j;
    
    printf("Enter the entries of first matrix....");

    for (i = 0; i < ax; i++)
    {

        for (j = 0; j < ay; j++)
        {

            printf("Enter the %dx%d value", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the entries of second matrix....");

    for (i = 0; i < bx; i++)
    {

        for (j = 0; j < by; j++)
        {

            printf("Enter the %dx%d value", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < ax; i++)
    {

        for (j = 0; j < by; j++)
        {

            c[i][j] = a[i][j] * b[i][j];
        }
    }

    for (i = 0; i < ax; i++)
    {

        for (j = 0; j < by; j++)
        {

            printf("%d", c[i][j]);

            if (i == ax - 1)
            {
                printf("\n");
            }

            else
            {
                printf("\t");
            }
        }
    }
}


int main()
{

    int x, y, a, b;
    printf("Enter the order of first matrix");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Enter the order of second matrix");
    scanf("%d", &a);
    scanf("%d", &b);
    if (y == a)
    {
        printf("\a");
        func(x, y, a, b);
    }
    else
    {
        printf("matrices cannot be multiplied due their orders");
    }
    printf("Hope you liked the program!");
    return 0;
}
