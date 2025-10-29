#include <stdio.h>

int main() {
	char studentName[20];
	double variableX, variableY, variableZ; /*variableZ is the result of variableX and variableY after arithmetic operations*/
	printf("Do understand, this is a simple program.  Any out of bounds, or incorrect data will like give unwanted results and can break the program");
	printf("\nEnter your USERNAME(max length: 20 characters): ");
	scanf("%20s", studentName);

	printf("\nYou will be prompted to enter 2 value, {X} and {Y}.");
	printf("\nFloating point values are allowed.");
	printf("\nThe operation will be performed as {X operator Y}.");
	printf("\nFor example:");
	printf("\n\tX / Y");
	printf("\n\tX * Y");
	printf("\n\tX + Y");
	printf("\n\tX - Y");

	printf("\n\nEnter value for variable X (numeral only): ");
	scanf(" %lf", &variableX);
	printf("\n\nEnter value for variable Y (numeral only): ");
	scanf(" %lf", &variableY);

	if (variableY == 0)
		printf("\n%s has entered %.2lf and %.2lf. %.2lf / %.2lf is UNDEFINED!!", studentName, variableX, variableY, variableX, variableY);
	else {
		variableZ = variableX / variableY;
		printf("\n%s has entered %.2lf and %.2lf. %.2lf / %.2lf equals %.2lf", studentName, variableX, variableY, variableX, variableY, variableZ);
	}

	variableZ = variableX * variableY;
	printf("\n%s has entered %.2lf and %.2lf. %.2lf * %.2lf equals %.2lf", studentName, variableX, variableY, variableX, variableY, variableZ);

	variableZ = variableX + variableY;
	printf("\n%s has entered %.2lf and %.2lf. %.2lf + %.2lf equals %.2lf", studentName, variableX, variableY, variableX, variableY, variableZ);

	variableZ = variableX - variableY;
	printf("\n%s has entered %.2lf and %.2lf. %.2lf - %.2lf equals %.2lf\n", studentName, variableX, variableY, variableX, variableY, variableZ);

	return 0;
}
