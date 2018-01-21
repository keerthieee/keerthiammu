#include <stdio.h>
#include<string.h>

int main(void) {
	char a;
scanf("%c",&a);
if((a>='a' && a<='z') || (a>='A' && a<='Z'))
{
printf("it is an alphabet");
}
else
{
printf("it is not an alphabet");
	}
return 0;
}
