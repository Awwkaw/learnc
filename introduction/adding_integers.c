#include <stdio.h>
//Here we are going to add two intergers together

int main()
{
	int firstNumber, secondNumber, sumOfTwoNumbers;

	printf("Enter two space seperated numbers: \n");
	
	//scanning for two interges
	scanf("%d %d", &firstNumber, &secondNumber);

	//adding the numbers
	sumOfTwoNumbers = firstNumber + secondNumber;

	//printing the sum:
	printf("\n%d + %d = %d\n", firstNumber, secondNumber, sumOfTwoNumbers); 
	return 0;
}
