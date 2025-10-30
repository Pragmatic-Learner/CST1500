#include <stdio.h>

int main() {
	/*Original vars*/
	float number1, number2;

	/*Pointer to each original vars*/
	float *ptr1 = &number1, *ptr2 = &number2;

	/*Vars for each operation*/
	float sum, diff, product, quotient;
	printf("ALL RESULTS WILL BE TO 2 DECIMAL PLACES!!\n\n");
	printf("Enter the value for 1st number : ");
	scanf("%f", ptr1); /*No & used, this pointer is the memory address*/

	printf("Enter the value for 2nd number : ");
	scanf("%f", ptr2); /*No & used, this pointer is the memory address*/

	/*Print memory address before arithmetic operation*/
	printf("\n\nMemory Address of 1st number : %p", ptr1);
	printf("\nMemory Address of 2nd number : %p\n", ptr2);

	/*dereferencing pointer for each operation, with (*varName)*/
	sum = *ptr1 + *ptr2;
	diff = *ptr1 - *ptr2;
	product = *ptr1 * *ptr2;
	quotient = *ptr1 / *ptr2;

	/*For readability, limit output to 2 decimal places*/
	printf("\nSum        = %.2f", sum);
	printf("\nDifference = %.2f", diff);
	printf("\nProduct    = %.2f", product);

	/*Create undefined behavior when denominator is 0*/
	if (*ptr2 != 0.0)
		printf("\nQuotient   = %.2f", quotient);
	else {
		printf("\nQuotient   = UnDefined!");
		printf("\nDenominator cannot be 0");
	}

	/*Print memory address after arithmetic operation*/
	printf("\n\nMemory Address of 1st number : %p", ptr1);
	printf("\nMemory Address of 1st number : %p\n", ptr2);

	return 0;
}
