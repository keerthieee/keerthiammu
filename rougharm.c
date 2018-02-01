#include <stdio.h>

int main(void) {
int v,k,count,r=0,a,b,i,o=0;
scanf("%d\t%d",&a,&b);

for(i=a;i<=b;i++)
{
	o=i;
	while(i>0)
	{
k=v%10;
r=r+(k*k*k);
v=v/10;
}
if(o==i)
{
	printf("%d",i);
}
}
return 0;
}
