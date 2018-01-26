#include <stdio.h>

int main(void) {
int i,m=0;
char a[50];
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]==' ')
	m++;
}
printf("%d",m+1);

	return 0;
}
