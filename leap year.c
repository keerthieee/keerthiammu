#include <stdio.h>
int main(void) {
int year;
scanf("%d",&year);
if(year%4==0)
{
	printf("it is leap year");
}
else
{
	printf("it is not a leap year");
}
	return 0;
}
