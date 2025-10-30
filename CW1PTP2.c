#include <stdio.h>

/*enum to help to access resultZ array*/
enum OPERATION {Quotient, Product, Sum, Difference};

int main() {
	char studentName[20]; /*Get student's name*/
	double inputX, inputY; /*get two values X and Y*/
	double resultZ[4]; /*Store result, with each index being associated with enum OPERATION*/

	printf("Do understand, this is a simple program.  Any out of bounds, or incorrect data will like give unwanted results and can break the program");
	printf("\nEnter your USERNAME(max length: 20 characters): ");
	fgets(studentName, sizeof(studentName), stdin);

	/*Prompts to guide user*/
	printf("\n\nYou will be prompted to enter 2 value, {X} and {Y}.");
	printf("\nFloating point values are allowed.");
	printf("\nThe operation will be performed as {X operator Y}.");
	printf("\nFor example:");
	printf("\n\tX / Y");
	printf("\n\tX * Y");
	printf("\n\tX + Y");
	printf("\n\tX - Y");

	printf("\n\nEnter value for variable X (numeral only): "); /*Get X*/
	if (scanf("%lf", &inputX) != 1) {
		printf("Invalid input for X.\n");
		return 1;
	}

	printf("\n\nEnter value for variable Y (numeral only): "); /*Get Y*/
	if (scanf(" %lf", &inputY) != 1) {
		printf("Invalid input for Y.\n");
		return 1;
	}

	/*PERFORM ARITHMETIC OPERATION*/
	if (inputY != 0) /*CATCH DENOMINATOR 0*/
		resultZ[Quotient] = inputX / inputY;
	resultZ[Product] = inputX * inputY;
	resultZ[Sum] = inputX + inputY;
	resultZ[Difference] = inputX - inputY;


	/*Display results to 2 decimal places*/
	printf("\nResults are to 2 decimal places...");
	if (inputY == 0)
		printf("\n%s has entered %.2lf and %.2lf. %.2lf / %.2lf is UNDEFINED!!", studentName, inputX, inputY, inputX, inputY);
	else
		printf("\n%s has entered %.2lf and %.2lf. %.2lf / %.2lf equals %.2lf", studentName, inputX, inputY, inputX, inputY, resultZ[Quotient])

	printf("\n%s has entered %.2lf and %.2lf. %.2lf * %.2lf equals %.2lf", studentName, inputX, inputY, inputX, inputY, resultZ[Product])
	printf("\n%s has entered %.2lf and %.2lf. %.2lf + %.2lf equals %.2lf", studentName, inputX, inputY, inputX, inputY, resultZ[Sum]);
	printf("\n%s has entered %.2lf and %.2lf. %.2lf - %.2lf equals %.2lf\n", studentName, inputX, inputY, inputX, inputY, resultZ[Difference]);

	return 0;
}
