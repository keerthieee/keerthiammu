#include <stdio.h>

int main(void) {
int i,j,orino,r,result=0;
scanf("%d",&i);
i=orino;
while(i!=0)
{
	r=i%10;
	result=result+r*r*r;
i/10;
	
}
if(orino==result)
{
	printf("it is armstrong");
	
}
else
{
	printf("it is not armstrong");
	
}
	return 0;
}
