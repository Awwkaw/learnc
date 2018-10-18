#include <stdio.h>
#include <ctype.h>
//This program checks wether a letter is a vowel or consonant

void main()
{

        //e1 and e2 are example one and two
        void e1(), e2();
        e1();
        e2();
}

//example 1
//This is a really ugly solution
void e1()
{
        char c;
        int isLowercaseVowel, isUppercaseVowel;

        printf("\n\nEnter a symbol from the alphabet: ");
        scanf("%c", &c);

        //The follwowing is one if c is a lowercase vowel
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

        //The follwowing is one if c is a lowercase vowel
        isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

        if (isLowercaseVowel || isUppercaseVowel)
                printf("\n%c is a vowel.", c);
        else
                printf("\n%c is a consonant.", c);

}

//example 2
//Still ugly, but now it checks if the entered symbol sis allowed
void e2()
{
        char c;
        int isLowercaseVowel, isUppercaseVowel;

        printf("\n");
        do {
                printf("Enter a symbol from the alphabet: ");
                scanf("%c", &c);
        }
        while (!isalpha(c));

        //The follwowing is one if c is a lowercase vowel
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

        //The follwowing is one if c is a lowercase vowel
        isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

        if (isLowercaseVowel || isUppercaseVowel)
                printf("\n%c is a vowel.", c);
        else
                printf("\n%c is a consonant.", c);

}
