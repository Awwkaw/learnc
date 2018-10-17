#include <stdio.h>
//Here are two examples for swapping numbers

void main()
{
	printf("\n\tHere is the first example of number swapping:\n");
	exampleOne();
	printf("\n\n\tHere is the second example of number swapping:\n");
	exampleTwo();
}

void exampleOne()
{
	double firstNumber, secondNumber, tempNumber;

	printf("Enter the first number: ");
	scanf("%lf", &firstNumber);
	printf("Enter the second number: ");
	scanf("%lf", &secondNumber);

	printf("Before the swap the variable firstNumber holds: %.2lf\n", firstNumber);
	printf("Before the swap the variable secondNumber holds: %.2lf\n", secondNumber);
	
	//Storing the first number
	tempNumber = firstNumber;
	//Setting the first number to the second one
	firstNumber = secondNumber;
	//Setting the second number to the first one
	secondNumber = tempNumber;
	
	printf("After the swap the variable firstNumber holds: %.2lf\n", firstNumber);
	printf("After the swap the variable secondNumber holds: %.2lf", secondNumber);

}

void exampleTwo() 
{
	double firstNumber, secondNumber;

	printf("Enter the first number: ");
	scanf("%lf", &firstNumber);
	printf("Enter the second number: ");
	scanf("%lf", &secondNumber);

	printf("Before the swap the variable firstNumber holds: %.2lf\n", firstNumber);
	printf("Before the swap the variable secondNumber holds: %.2lf\n", secondNumber);
	
	//setting the first number to the delta value
	firstNumber = firstNumber - secondNumber;
	//Setting the second number to the first number
	secondNumber = firstNumber + secondNumber;
	//Setting the first number to the second number
	firstNumber = secondNumber - firstNumber;
	
	printf("After the swap the variable firstNumber holds: %.2lf\n", firstNumber);
	printf("After the swap the variable secondNumber holds: %.2lf", secondNumber);

}
