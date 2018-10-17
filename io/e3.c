#include <stdio.h>
//This time the objective is to experiment with scanf, to look at inputs
int main()
{
	int testInteger;
	printf("Enter a cool integer: ");
	scanf("%d",&testInteger); //apparently the ampersand allows us to assign the digit to the existing testInterger variable
	printf("The inputed number was: %d ",testInteger);
	float f;
	printf("Enter a cool float: ");
	scanf("%f",&f); // note that we use %f for floats and %d for integers
	printf("The inputed float was: %f",f);

	return 0;
}
