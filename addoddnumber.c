#include <stdio.h>

int main(void) {
int a,b,i,sum=0;
scanf("%d",&a);
while(a!=0)
{
b=a%10;
if(b%2!=0)
{
	sum=sum+b;
}
a=a/10;

}
printf("%d\n",sum);
if(sum%2!=0)
{
	printf("O");
}
else
{
	printf("E");
}
	return 0;
}
