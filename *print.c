#include <stdio.h>
#include<string.h>
int main() 
{
char a[50];
int b,c;
scanf("%s",&a);
b=strlen(a);
if(b%2==0)
{
	c=b/2;
	a[c]='*';
	a[c-1]='*';
}
else
{
	c=b/2;
	a[c]='*';
}
printf("%s",a);
	return 0;
}
