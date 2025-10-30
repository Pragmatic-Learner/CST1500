#include <stdio.h> /*Enable i/o operation*/

int main() {
	/*PERSONAL INFORMATION*/
	char studentName[] = "Nardev Juggoo";
	char studentID[] = "M01100508";
	char degreeProgramme[] = "BSc (Hons) Computer Science (Systems Engineering)";
	char reasonForPursuingCourse[] = "Since a young age, I have been deeply facinated by technology.  The inner workings of a computer seems complex and amazing to me, and I wanted to learn how these cool machines worked behind the scenes.  But my main motivation right now, is to deepen my knowledge of programming and mathematical concepts, so as to make my own game engine, implementing my own rendering and pysics engine.";
	
	/*ARITHMETIC OPERATION TO PERFORM ON VALUES IN STUDENT ID*/
	/*Note:Given that the studentID has 8 integers,
			8 variables were declared as num0 ... num7*/
	int num0 = 0, num1 = 1, num2 = 1, num3 = 0, num4 = 0, num5 = 5, num6 = 0, num7 = 8;
	float quotient = (float)num7 / (float)num5; /*type cast to float, to prevent loss of data*/
	int product = num2 * num7;
	int sum = num7 + num1;
	int difference = num2 - num5;

	/*Output each PERSONAL INFORMATION, with a corresponding label*/
	printf("\nStudent Name: %s", studentName);
	printf("\nStudent ID: %s", studentID);
	printf("\nStudent's Degree Programme : %s", degreeProgramme);
	printf("\nStudent's Reason For Pursuing Course : %s", reasonForPursuingCourse);

	/*Output ARITHMETIC OPERATION, citing each operation performed*/
	printf("\n\nArithmetics using values in student ID:");
	printf("\nArithmetic Quotient   : %d / %d\t= %.2f", num7, num5, quotient);
	printf("\nArithmetic Product    : %d * %d\t= %d", num2, num7, product);
	printf("\nArithmetic Sum        : %d + %d\t= %d", num7, num1, sum);
	printf("\nArithmetic Difference : %d - %d\t= %d\n", num2, num5, difference);

	return 0;
}
