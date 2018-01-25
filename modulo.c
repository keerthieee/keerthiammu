#include <stdio.h>

int main(void) {
int v,n,k,i;
scanf("%d%d%d",&v,&n,&k);
i=(v*n)%k;
printf("%d",i);
	return 0;
}
