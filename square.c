#include <stdio.h>
#include<string.h>
int main() 
{
float a,i,b,j;
scanf("%f%f",&a,&b);
i=a*b;
for(j=1;j<=i;j++)
{
if(i/j==j)
{
	printf("perfect square");
}
}
	return 0;
}
