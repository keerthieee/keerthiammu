#include <stdio.h>

int main(void) {
int a,b,sum=0;
scanf("%d",&a);
while(a!=0)
{
b=a%10;
sum=sum+b;
a=a/10;
}
printf("%d",sum);
	return 0;
}
