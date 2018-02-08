#include <stdio.h>

int main(void) {
char a[50];
int i,count=0,sum=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
	if((a[i]>='0')&&(a[i]<='9'))
	{
count++;
}
if((a[i]>='a')&&(a[i]<='z'))
{
	sum++;
}
}
if((count>=1)&&(sum>=1))
{
printf("yes");
}
else
{
printf("no");
}

	return 0;
}
