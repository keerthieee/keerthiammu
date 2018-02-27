#include <stdio.h>

int main(void) {
int i,j,k=0;
scanf("%d",&i);
while(i>=1)
{
	j=i%10;
	k=k+(j*j);
	i=i/10;
}
printf("%d",k);
	return 0;
}
