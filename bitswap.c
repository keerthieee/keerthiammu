#include <stdio.h>

int main(void) {
int a,k;
scanf("%d%d",&a,&k);
printf("%d\t%d\n",a,k);
a=a^k;
k=a^k;
a=a^k;
printf("%d\t%d\n",a,k);
	return 0;
}
