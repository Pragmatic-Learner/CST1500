#include <stdio.h>

int main() {
	/*VAR: PERSONAL INFORMATION*/
	char studentName[] = "Nardev Juggoo";
	char studentID[] = "M01100508";
	char degreeProgramme[] = "BSc (Hons) Computer Science (Systems Engineering)";
	char reasonForPursuingCourse[] = "Since a young age, I have been deeply facinated by technology.  The inner workings of a computer seems complex and amazing to me, and I wanted to learn how these cool machines worked behind the scences.  But my main motivation right now, is to deepen my knowledge of programming and mathematical concepts, so as to make my own game engine, implementing my own rendering and pysics engine.";
	
	/*VAR: ARITHMETIC OPERATION TO PERFORM ON VALUES IN STUDENT ID*/
	int num0 = 0, num1 = 1, num2 = 1, num3 = 0, num4 = 0, num5 = 5, num6 = 0, num7 = 8;
	float quotient = (float)num7 / (float)num5;
	int product = num2 * num0;
	int sum = num7 + num1;
	int difference = num2 - num5;

	/*DISPLAY INFORMATION*/
	printf("\nStudent Name: %s", studentName);
	printf("\nStudent ID: %s", studentID);
	printf("\nStudent's Degree Programme : %s", degreeProgramme);
	printf("\nStudent's Reason For Pursuing Course : %s", reasonForPursuingCourse);

	/*DISPLAY ARITHMETIC OPERATION RESULT*/
	printf("\n\nArithmetics using values in student ID:");
	printf("\nArithmetic Quotient   : %d / %d\t= %.2f", num7, num5, quotient);
	printf("\nArithmetic Product    : %d * %d\t= %d", num2, num0, product);
	printf("\nArithmetic Sum        : %d + %d\t= %d", num7, num1, sum);
	printf("\nArithmetic Difference : %d - %d\t= %d\n", num2, num5, difference);
}
