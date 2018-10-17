#include <stdio.h>
//This example shows off how ASCII characters are stored

int main()
{
	char chr;
	printf("Enter an ASCII character: ");
	scanf("%c",&chr);
	printf("You entered the character %c, this holds the ASCII value %d ",chr,chr);
	return 0;
}
