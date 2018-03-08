#include <stdio.h>

int main(void) {
int a,b,i,j,l,k=1,v=1;
scanf("%d%d",&a,&b);
for(i=1;i<=a;i++)
{
	k=k*i;
}
for(j=1;j<=b;j++)
{
	v=v*j;
}
l=k/v;
printf("%d",l);
return 0;
}
