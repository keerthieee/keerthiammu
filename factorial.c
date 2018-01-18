#include <stdio.h>

int main(void) {
int i,j,factorial=1;
scanf("%d",&i);
for(j=1;j<=i;j++)
{
	factorial=factorial*j;
}
printf("%d",factorial);
	return 0;
}
