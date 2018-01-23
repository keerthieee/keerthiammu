#include <stdio.h>

int main(void) {
	int n,i,r=0,k;
scanf("%d",&n);
while(n>=1)
{
k=n%10;
printf("%d",k);
n=n/10;
}
	return 0;
  }
