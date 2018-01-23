#include <stdio.h>

int main(void) {
	int b,n,c,e,k;
	
scanf("%d",&n);
k=n%10;
b=n/10;
c=b%10;
e=b/10;
printf("%d\t%d\t%d\t",e,c,k);

	return 0;
  }
