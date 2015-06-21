#include <stdio.h>

int main(void)
{
	int *pnum; //this is the pointer
	int  num=12345;//this is just the content of num
	pnum=&num; //assigned address of num into pnum
	printf("num is %d\n", num);
	printf("num's address is %p\n", &num);
	printf("pnum stores %p\n",pnum);
	printf("pnum's content is %d\n",*pnum);
}
