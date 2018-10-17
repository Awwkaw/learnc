#include <stdio.h>
//here we multiply two floats

void main()
{
	double firstNumber, secondNumber, product;
	printf("input two numbers: \n\n");

	//getting the numbers
	scanf("%lf %lf", &firstNumber, &secondNumber);

	product = firstNumber * secondNumber;

	printf("\n%lf * %lf = %lf", firstNumber, secondNumber, product);
}
