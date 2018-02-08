#include <stdio.h>

int main(void) {
int v,k;
scanf("%d%d",&v,&k);
printf("%d\t%d\n",v,k);
v=v^k;
k=v^k;
v=v^k;
printf("%d\t%d\n",v,k);
	return 0;
}
