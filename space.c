#include <stdio.h>

int main(void) {
int i,sum=0;
char a[50];
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]==' ')
	sum++;
}
printf("%d",sum);

	return 0;
}
