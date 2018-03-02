#include <stdio.h>
int main(void) {
int a[10],b[10],i,j,n,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
for(i=0;i<n;i++)
{
	if(a[i]==b[n-i-1])
	count++;
}
if(count==4)
printf("yes");
else
printf("no");
	return 0;
}
