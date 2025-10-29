#include <stdio.h>

int main() {
	float number1, number2;
	float *ptr1 = &number1, *ptr2 = &number2;
	float sum, diff, product, quotient;
	printf("ALL RESULTS WILL BE TO 2 DECIMAL PLACES!!\n\n");
	printf("Enter the value for 1st number : ");
	scanf("%f", ptr1);

	printf("Enter the value for 2nd number : ");
	scanf("%f", ptr2);

	printf("\n\nMemory Address of 1st number : %p", ptr1);
	printf("\nMemory Address of 2nd number : %p\n", ptr2);

	sum = *ptr1 + *ptr2;
	diff = *ptr1 - *ptr2;
	product = *ptr1 * *ptr2;

	if (*ptr2 != 0.0)
		quotient = *ptr1 / *ptr2;
	else {
		printf("Cannot divide by 0\n");
	}

	printf("\nSum        = %.2f", sum);
	printf("\nDifference = %.2f", diff);
	printf("\nProduct    = %.2f", product);
	printf("\nQuotient   = %.2f", quotient);

	printf("\n\nMemory Address of 1st number : %p", ptr1);
	printf("\nMemory Address of 1st number : %p\n", ptr2);

	return 0;
}
