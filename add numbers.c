#include <stdio.h>

int main(void) {
int n,k,i,a[i],sum=0;;
scanf("%d\t%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d\t",&a[i]);
}
for(i=0;i<=k;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
	return 0;
}
