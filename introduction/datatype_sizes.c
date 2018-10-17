#include <stdio.h>
//Here we find the sizes of some datatypes

int main() 
{
	int intergerType;
	float floatType;
	double doubleType;
	char charType;
	long double longDoubleType;

	// Here we print the sizes of each of the above using the sizeof() function
	printf("\nSize of int: %ld bytes\n", sizeof(intergerType));	
	printf("Size of float: %ld bytes\n", sizeof(floatType));	
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of longDouble: %ld bytes\n", sizeof(longDoubleType));
	printf("Size of char: %ld bytes\n", sizeof(charType));
	
return 0;
}
