#include <stdio.h>
#include <math.h>

void main()
{
        //defining all the needed coefficients
        double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

        printf("Enter the coefficients a, b and c, in that order: ");
        scanf("%lf %lf %lf", &a, &b, &c);

        discriminant = b*b-4*a*c;
        if (discriminant>0)
        {
                //here the sqrt() function is from the math library
                root1 = (-b+sqrt(discriminant))/(2*a);
                root2 = (-b-sqrt(discriminant))/(2*a);
                
                printf("(root1 ; root2) = (%.2lf ; %.2lf)", root1, root2);
        }

        else if (discriminant == 0)
        {
                //apparantly variables can be assigned like this in c!!!
                root1 = root2 = -b/(2*a); 

                printf("root1 = root2 = %.2lf", root1);
        }
        else
        {
                realPart = -b/(2*a);
                imaginaryPart = sqrt(-discriminant)/(2*a);
                printf("(root1 ; root2) = (%.2lf+%.2lfi ; %.2lf-%.2lfi)", realPart, imaginaryPart, realPart, imaginaryPart);
        }
}

