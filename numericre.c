#include<stdio.h>
#include<string.h>
int main(void) {
char a;
scanf("%s",&a);
if((a>='0')&&(a<='9'))
{
	printf("numeric");
}
else
{
	printf("not a numeric");
}
	return 0;
}
