#include <stdio.h>
//Here are two examples of using loops to sum up to a number

void main()
{
        void efor(), ewhile();
        efor();
        printf("\n");
        ewhile();
        printf("\n");
}
//here is the for loop
void efor()
{
        //apparently ints can be assigned like this, it seems useless here, but it's cool to know!
        int n, i, sum=0;

        printf("Input a number: ");
        scanf("%d", &n);

        //Note that it goes= variable with starting value, end term, iteration steps.
        //Note that it's ++i 
        //Note that the objects in the for loop are seperated by semicolon
        for(i=1; i <= n; ++i)
        {
                sum += i;
        }

        printf("The sum of all numbers less than or equals to %d is %d", n, sum);
}
//Here a while loop is used both for the sum and for the number
void ewhile()
{
        int n,i,sum=0;

        do{
                printf("Input a positive integer: ");
                scanf("%d", &n);
        }
        while (n<0);

        i=1;

        while ( i<=n )
        {
                sum += i;
                ++i;
        }
        printf("The sum of all numbers less than or equals to %d is %d", n, sum);
} 
