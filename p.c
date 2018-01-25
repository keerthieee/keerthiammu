#include<stdio.h>
#include<stdio.h>
int main(void)
{
int v,b,sum=1,i;
scanf("%d",&v);
scanf("%d",&b);
for(i=1;i<=b;i++)
{
sum=sum*v;
}
printf("%d",sum);
return 0;
}
