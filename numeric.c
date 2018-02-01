#include <stdio.h>

int main(void) {
int a;
scanf("%d",&a);
if((a>=0)&&(a<=9))
{
	printf("numeric");
}
else
{
	printf("not a numeric");
}
	return 0;
}
