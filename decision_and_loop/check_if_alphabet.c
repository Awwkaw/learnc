#include <stdio.h>
//This program checks if a char is alphabet

void main()
{
        char c;
        printf("Enter a character: ");
        scanf("%c", &c);

        if( ( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'))
                printf("%c is an alphabet", c);
        else
                printf("%c is not a letter\n",c);
}
