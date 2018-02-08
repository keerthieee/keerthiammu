#include <stdio.h>

int main(void) {
int n,i,count,k;
scanf("%d",&n);
for(i=n-1;i<=n;i--)
{
	count=0;
	k=i%2;
	if(k==0)
	{
		count++;
if(count==1)

	printf("%d",i);
	break;
}
}
	return 0;
}
