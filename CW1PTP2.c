#include <stdio.h>

enum OPERATION { /*help to access resultZ array*/
	Quotient,
	Product,
	Sum,
	Difference
};

int main() {
	char studentName[20];
	double inputX, inputY, resultZ[4];
	printf("Do understand, this is a simple program.  Any out of bounds, or incorrect data will like give unwanted results and can break the program");
	printf("\nEnter your USERNAME(max length: 20 characters): ");
	scanf("%20s", studentName);

	/*Prompts to better guide user*/
	printf("\nYou will be prompted to enter 2 value, {X} and {Y}.");
	printf("\nFloating point values are allowed.");
	printf("\nThe operation will be performed as {X operator Y}.");
	printf("\nFor example:");
	printf("\n\tX / Y");
	printf("\n\tX * Y");
	printf("\n\tX + Y");
	printf("\n\tX - Y");

	printf("\n\nEnter value for variable X (numeral only): "); /*Get X*/
	scanf(" %lf", &inputX);

	printf("\n\nEnter value for variable Y (numeral only): "); /*Get Y*/
	scanf(" %lf", &inputY);

	resultZ[Quotient] = inputX / inputY;
	resultZ[Product] = inputX * inputY;
	resultZ[Sum] = inputX + inputY;
	resultZ[Difference] = inputX - inputY;

	/*Catch denominator 0, which should output, undefined*/
	/*Limit numbers to 2 decimal places*/
	if (inputY == 0)
		printf("\n%s has entered %.2lf and %.2lf. %.2lf / %.2lf is UNDEFINED!!", studentName, inputX, inputY, inputX, inputY);
	else {
		printf("\n%s has entered %.2lf and %.2lf. %.2lf / %.2lf equals %.2lf", studentName, inputX, inputY, inputX, inputY, resultZ[Quotient]);
	}
	printf("\n%s has entered %.2lf and %.2lf. %.2lf * %.2lf equals %.2lf", studentName, inputX, inputY, inputX, inputY, resultZ[Product]);
	printf("\n%s has entered %.2lf and %.2lf. %.2lf + %.2lf equals %.2lf", studentName, inputX, inputY, inputX, inputY, resultZ[Sum]);
	printf("\n%s has entered %.2lf and %.2lf. %.2lf - %.2lf equals %.2lf\n", studentName, inputX, inputY, inputX, inputY, resultZ[Difference]);

	return 0;
}
