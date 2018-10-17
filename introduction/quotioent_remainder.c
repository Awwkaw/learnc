#include <stdio.h>
//Here the quotient and remainder is calculated

int main()
{
	int dividend, divisor, quotient, remainder;

	printf("\nEnter the dividend and the divisor, seperated by a space: \n\n");
	scanf("%d %d", &dividend, &divisor);

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	printf("\nThe quotient was: %d\nThe remainder was: %d", quotient, remainder);
	return 0;
}
