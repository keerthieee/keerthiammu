#include <stdio.h>

int main(void) {
int i,j,fact=1;
scanf("%d",&i);
for(j=1;j<=i;j++)
{
	fact=fact*j;
}
printf("%d",fact);
	return 0;
}

