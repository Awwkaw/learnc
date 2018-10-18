#include <stdio.h>
//This program finds the largest of three numbers

void main()
{
        //defining the example functions
        void e1(), e2(), e3();

        e1();
        e2();
        e3();

}

//The first example

void e1()
{
        //defining the three numbers and entering them
        double n1, n2, n3;
        
        printf("\n\nEnter three numbers: ");
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        //This example is done by having one if statement per option
        if( n1>=n2 && n1>=n3 )
                printf("%.2f is the largest number.", n1);
        if( n2>=n1 && n2>=n3 )
                printf("%.2f is the largest number.", n2);
        if( n3>=n1 && n2<=n3 )
                printf("%.2f is the largest number.", n3);

}

void e2()
{
        //defining the numbers and entering them
        double n1, n2, n3;
        
        printf("\n\nEnter three numbers: ");
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        //this time there are branching if statements within each if statement
        //This means that the if statements are incapsuledhere
        if( n1>=n2)
        {
                if ( n1>=n3 )
                        printf("%.2f is the largest number.", n1);
                else 
                        printf("%.2f is the largest number.", n3);
        }
        if( n1>=n2)
        {
                if ( n1>=n3 )
                        printf("%.2f is the largest number.", n1);
                else 
                        printf("%.2f is the largest number.", n3);
        }

}

void e3()
{
//defining the numbers and entering them
        double n1, n2, n3;
        
        printf("\n\nEnter three numbers: ");
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        //This is the introduction to else if
        if( n1>=n2 && n1>=n3 )
                printf("%.2f is the largest number.", n1);
        else if ( n2>=n1 && n2>=n3 )
                printf("%.2f is the largest number.", n2);
        else
                printf("%.2f is the largest number.", n3);
}
