#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argv

	printf("argc is %d\n", argc);

	int i = argc - 1;
	while(i >= 0) {
		printf("arg %d: %s\n", i, argv[i]);
		i--;
	}


	// let's make our own array of strings
	char *states[] = {
		"Cali", "Oregon", "Washington", "Texas"
	};

	int num_states = 4;
	int c = 0; //watch for this
	while(c < num_states) {
		printf("state %d: %s\n", c, states[c]);
		c++;
	}

	return 0;

}
