#include <stdio.h>
#include <string.h> /*for strcmp*/

/*Function declaration*/
void printName(int X, char *userName);
int passwordEntry(char *userName, const int MAX_ATTEMPT);

int main(){
	/*GOAL, get input type int X, pass to */
	int X;
	char endInput, userName[20];
	int attempt;
	const int MAX_ATTEMPTS = 3; /*Maximum attepts available*/
	printf("Enter a whole number (INTEGER ONLY) : ");
	if (scanf("%d%c", &X, &endInput) != 2 || endInput != '\n') {
		printf("\nError, input is invalid.\n");
		return 1;
	}
	printName(X, userName);
	attempt = passwordEntry(userName, MAX_ATTEMPTS);

	if (attempt != 0)
		printf("\n\nSuccess\nWell done %s, you got the password right in %d attempt(s)!\n", userName, (MAX_ATTEMPTS - attempt + 1));
	else
		printf("\n\nFailure\nBad luck %s, you took %d attempts, you are locked out\n", userName, attempt);
	return 0;
}

/*
	Function definitions
*/
void printName(int X, char *userName) {
	/*Print username X times*/
	printf("Enter your username (max length - 20 | no spaces) : ");
	scanf("%20s", userName);
	for (int i = 0; i < X; i++) {
		printf("%s\n", userName);
	}
}

int passwordEntry(char *userName, const int MAX_ATTEMPT) {
	const char PASSWORD_RIGHT[] = "ThisIsCorrect"; /*The CORRECT PASSWORD, that the user must guess*/
	char paswordGuess[20];

	/*Start from 3, execute code, and decrement by 1*/
	for (int i = MAX_ATTEMPT; i > 0; i--) {
		printf("User %s, enter the password (ATTEMPS LEFT - %d) : ", userName, i);
		scanf("%20s", paswordGuess);

		/*If the input and correct password match, return the current attempt number, else keep looping until reach 0 and then stop
		or right input reached*/
		if (strcmp(PASSWORD_RIGHT, paswordGuess) == 0)
			return i;
	}
	printf("Incorrect Password!  Try again!!\n\n");
	return 0;
}
