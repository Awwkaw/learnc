#include <stdio.h>
//This program makes a multiplication table for a number

void main()
{
        void eself(), esite();
        eself();
}

//selfmade solution
void eself()
{
        int n,i;
        printf("Enter an intgeger: ");
        scanf("%d", &n);
        for (i=1; i<=10; ++i)
        {
                printf(" %d * %d = %d \n", n, i, n*i);
        }
}
