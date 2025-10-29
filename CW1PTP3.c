#include <stdio.h>

int main() {
	int examScore;

	printf("Keep entering exam scores when prompted.  To exit, simple write -1 in for the exam scoren");
	while (examScore != -1) {

		printf("\n\nEnter the exam score (INTEGER ONLY, enter -1 to exit) : ");
		scanf("%d", &examScore);
        	
		if (examScore == -1)
			break;
		else if (examScore < 0 || examScore > 100)
			printf("\tERROR!!  Example score must be between 0 and 100.\n\tPlease re-enter the exam score...");
		else if (examScore < 39)
			printf("\nYour exam score is %d which is a FAIL", examScore);
		else if (examScore < 49)
			printf("\nYour exam score is %d which is a THIRD", examScore);
		else if (examScore < 59)
			printf("\nYour exam score is %d which is a LOWER SECOND", examScore);
		else if (examScore < 69)
			printf("\nYour exam score is %d which is a UPPER SECOND", examScore);
		else
			printf("\nYour exam score is %d which is a FIRST", examScore);
	}
	printf("Exiting Program...\n");
	return 0;
}
