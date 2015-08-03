#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;

	if(argc==2) {
		printf("You only have one argument. You suck.\n");
	} else if(argc > 1 && argc <4) {
		printf("Here are your arguments: \n");

		for(i = 1; i < argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("Your arguments are TOO DAMN HIGH. You suck.\n");
	}


	// My own shenanigans for the xtra
	int *num;

	printf("Enter a number for testing: ");
	scanf("%d", num);

	int num1 = num

	if(num1 % 2 == 0) {
		printf("the number is even\n");
	} else {
		printf("the number is odd\n");
	}

	return 0;
}
