#include <stdio.h>

int main(void) {
int a,b,count;
scanf("%d",&a);
for(b=1;b<=a;b++)
{
	if(a%b==0)
count++;
}
if(count>2)
printf("yes");
else
printf("no");
	return 0;
}
