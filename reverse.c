#include <stdio.h>

int main(void) {
int i,j;
scanf("%d",&i);
while(i>=1)
{
	j=i%10;
	printf("%d",j);
	i=i/10;
}
	return 0;
}

