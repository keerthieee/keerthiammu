#include <stdio.h>

int main(void) {
	int i,j,k;
	scanf("%d%d",&i,&j);
k=i;	
i=j;
j=k;
printf("%d\t%d",i,j);

	return 0;
}
