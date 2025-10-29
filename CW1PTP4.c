#include <stdio.h>
#include <string.h>

void printName(int X, char *userName);
int passwordEntry(char *userName);

int main(){
	int X, attempt;
	char userName[20];
	printf("Enter a whole number (INTEGER ONLY) : ");
	scanf("%d", &X);
	printName(X, userName);
	attempt = passwordEntry(userName);

	if (attempt != 0)
		printf("\n\nSuccess\nWell done %s, you got the password right in %d attempts!\n", userName, attempt);
	else
		printf("\n\nFailure\nBad luck %s, you took %d attempts, you are locked out\n", userName, attempt);
	return 0;
}

void printName(int X, char *userName) {
	printf("Enter your username (max length - 20 | no spaces) : ");
	scanf("%20s", userName);
	for (int i = 0; i < X; i++) {
		printf("%s\n", userName);
	}
}

int passwordEntry(char *userName) {
	const char PASSWORD_RIGHT[] = "ThisIsCorrect";
	const int MAX_ATTEMPS = 3;
	char paswordGuess[20];
	for (int i = MAX_ATTEMPS; i > 0; i--) {
		printf("User %s, enter the password (ATTEMPS LEFT - %d) : ", userName, i);
		scanf("%20s", paswordGuess);
		if (strcmp(PASSWORD_RIGHT, paswordGuess) == 0)
			return i;
		else if (i != 0)
			printf("Incorrect Password!  Try again!!\n\n");
	}
	return 0;
}
