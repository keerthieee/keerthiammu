#include <stdio.h>

int main(void) {
char a[50];
int count=0,i;
gets(a);
for(i=0;a[i]!='\0';i++)
{
	if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
{
	count++;
}
}
if(count>=1)
{
	printf("vowel is present");
}
else
{
	printf("no vowel");
}
	return 0;
}
