#include <stdio.h>

int main(void) {
int a,b,c;
scanf("%d",&a);
b=a/60;
c=a%60;
printf("%dhour\t%dminute",b,c);
	return 0;
}
