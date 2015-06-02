#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

char buf[80];

int main(int argc, char *argv[])
{
	int filler0 = 101;
	int key = 1337;
	int filler1 = 333;
	int filler2 = 123;
	int filler3 = 321;	
	int red= read(STDIN_FILENO,buf, 80);
	buf[red] = '\x00';
	printf(buf);
}
