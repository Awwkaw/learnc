#include <stdio.h>
//Finds the factorial of a positive number

void main()
{
        int n,i;
        unsigned long long factorial = 1;

        do
        {
                printf("\ninput an integer: ");
                scanf("%d",&n);
        }
        while ( n <= 0);

        for (i=1; i<=n ; ++i)
        {
                factorial *= i;
        }
        printf("%d! = %llu", n, factorial);
}
