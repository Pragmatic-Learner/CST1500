#include <stdio.h>

/*Enum to label int literals, for ease of writing and understand of ranks*/
enum classificationBorder{FAIL = 0, THIRD = 40, LOWER_SECOND = 50, UPPER_SECOND = 60, FIRST = 70};

int main() {
	/*Lower Bound to score enterable and Upper Bound*/
	const int LOWEST_SCORE = 0, HIGHEST_SCORE = 100;

	/*Lower Bounds of each score classification*/
	//const int FAIL = 0, THIRD = 40, LOWER_SECOND = 50, UPPER_SECOND = 60, FIRST = 70;

	/*Value to terminate loop and exit program*/
	const int TERMINATOR = -1;

	int examScore;
	/*endInput, exist just to check if the user only enter an int and presses enter
	and that no other (wrong) data is input*/
	char endInput;

	printf("Keep entering exam scores when prompted.  To exit, simply write -1 for the exam score");
	
	/*Loop to repeat input examScore, until -1 is input*/
	do {

		printf("\nEnter the exam score (INTEGER ONLY, enter -1 to exit) : ");

		/*Check if input, consists of {INT} AND {\n}  \\ else, skip iteration to next*/
		if (scanf("%d%c", &examScore, &endInput) != 2 || endInput != '\n') {
			printf("\nError!!  Value entered is not an INTEGER!!");
			printf("\nPlease re-enter exam score!!\n");
			continue;
		}

		/*Verify and Output grade classification*/
		if (examScore == TERMINATOR)
			break;
		else if (examScore < LOWEST_SCORE || examScore > HIGHEST_SCORE)
			printf("\tERROR!!  Example score must be between 0 and 100.\n\tPlease re-enter the exam score...");
		else if (examScore < THIRD)
			printf("\nYour exam score is %d which is a FAIL", examScore);
		else if (examScore < LOWER_SECOND)
			printf("\nYour exam score is %d which is a THIRD", examScore);
		else if (examScore < UPPER_SECOND)
			printf("\nYour exam score is %d which is a LOWER SECOND", examScore);
		else if (examScore < FIRST)
			printf("\nYour exam score is %d which is a UPPER SECOND", examScore);
		else
			printf("\nYour exam score is %d which is a FIRST", examScore);
	} while (examScore != -1);
	printf("\nExiting Program...\n");
	return 0;
}
