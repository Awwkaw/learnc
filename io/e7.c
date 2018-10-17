#include <stdio.h>
//Here there's a deeper look at interger and float io

int main()
{
	float decimal = 987.6543;
	int integer = 9876;

	//printing the number right justified with 6 columns
	printf("4 digit integer right justified within 6 columns: %6d\n", integer);

	//Trying to print the number right justified to three digits, but thye number is too long
	printf("4 digit integer right justified to the third column: %3d\n", integer);

	//Rounding float to two digits
	printf("Floating point number rounded to 2 digits: %.2f\n", decimal);

	//Rounding float to 0 digits
	printf("Floating point number rounded to 0 digits: %.f\n", decimal);

	//printing a number in exponential(scientific) notation
	printf("Floating point number in scientific notation: %e\n", decimal);
	return 0;
}
