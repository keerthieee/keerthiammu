#include <stdio.h>

int main(void) {
char a[50];
int i,count=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
	if((a[i]>='!')&&(a[i]<='@'))
	count++;
}
printf("%d",count);
	return 0;
}
