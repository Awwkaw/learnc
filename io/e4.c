#include <stdio.h> 
#include <wchar.h> // The wchar library allows for characters outside the  ASCII area
#include <locale.h> //This allows setting the locale to something specific, it's needed to map utf-8 characters the correct way

//This is more or less the same as example three, but this time the i/o is on a character

int main()
{
	setlocale(LC_ALL, "");
	wchar_t chr;
	printf("Enter a cool Character: ");
	scanf("%lc",&chr); // note %c for character %lc is for a wide character, this allows utf-8 encoded letters.
	printf("The coolest character in town is: %lc ",chr);
	return 0;
}
