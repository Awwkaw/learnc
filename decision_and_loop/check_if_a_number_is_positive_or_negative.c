#include <stdio.h>
//This program has two vays of checking if a  number is larger or smaller than zero

void main()
{
        void e1(), e2(), eself();
        e1();
        printf("\n");
        e2();
        printf("\n");
        eself();
}

void eself()
{
        double number;
        _Bool positive;
        printf("input a number: ");
        scanf("%lf", &number);
        positive = number >= 0.0;
        if (positive)
                printf("%lf is a positive number", number);
        else
                printf("%lf is a negative number", number);
}

void e1()
{
        //This uses non nested if statements
        double number;
        printf("Enter a number: ");
        scanf("%lf", &number);

        if (number <= 0.0)
        {
                if (number == 0.0)
                        printf("You entered zero");
                else
                        printf("You entered a negative number");
        }
        else
                printf("You entered a positive number");
}

void e2()
{
        //This uses nested if statements

        double number;
        printf("input a number: ");
        scanf("%lf", &number);

        if( number < 0.0 )
                printf("You entered a Negative number");
        else if ( number > 0.0 )
                printf("You entered a positive number");
        else
                printf("You entered 0");
}


