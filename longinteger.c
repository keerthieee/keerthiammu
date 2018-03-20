#include <stdio.h>

int main(void) {
	long int t;
	scanf("%ld",&t);
	if((t>=-32167)&&(t<=32167))
	{
		printf("int");
	}
	else
	{
		printf("long int");
	}
	
	return 0;
}
