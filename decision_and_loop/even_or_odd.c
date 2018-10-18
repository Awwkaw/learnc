#include <stdio.h>
//This program check wether a number is odd or even.
void main()
{
        void example1(), example2();

        example1();
        example2();
}

//example one

void example1()
{
        int number;
        printf("\nWrite a number: ");
        scanf("%d", &number);
        //in C if-else statements apparently work by having the test inside a parentheses
        //and not closing the statement
        if(number % 2 == 0)
                printf("\n%d is an even number", number);
        else
                printf("\n%d is an odd number", number);

}

//example 2
void example2()
{
        int number;

        printf("\nEnter an integer: ");
        scanf("%d", &number);

        //A different way of doing if statements (This creates long lines)

        (number % 2 == 0) ? printf("%d is even", number) : printf("%d is odd", number);
}
