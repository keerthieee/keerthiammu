#include <stdio.h>
int main(void) {
int i,j,k,orino,r,result;
scanf("%d %d",&i,&j);
for(k=i;k<=j;k++)
{
orino=k;
result=0;
while(orino!=0)
{
	r=orino%10;
	result=result+r*r*r;
orino=orino/10;
	}
if(k==result)
printf("%d",result);
}
	return 0;
}
