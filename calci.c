#include <stdio.h>

int main(void) {
int a,b,d;
char c;
scanf("%c",&c);
scanf("%d%d",&a,&b);
switch (c)
{
	case '/':
		d=a/b;
		printf("%d / %d = %d",a,b,d);
		break;
	case '%':

		d=a%b;
		printf("%d\t%\t%d = %d",a,b,d);
		break;
}
	return 0;
}
