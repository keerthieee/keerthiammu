#include <stdio.h>
int main(void) {
	char c[50];
int i;
scanf("%s",&c);
for(i=0;c[i]!='\0';i++)
{
	if((c[i]>='1')&&(c[i]<='9'))
	printf("%c",c[i]);
}

	return 0;
}
