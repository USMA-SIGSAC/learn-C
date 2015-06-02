#include <stdio.h>

int main(int argc,  char *argv[])
{
	//go through string in argv
	int i=0;
	while(i<argc){
	printf("arg %d: %s\n", i, argv[i]);
	i++;
	}
	
	//lets make our own arry of strings.
	char *states[]={"california", "oregon","washington", "texas"};
	int num_states=4;
	while (i<num_states){
	printf("state %d: %s\n",i,states[i]);
	i++;
	}
	return 0;
}
