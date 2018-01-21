#include<stdio.h>
int main(void)

{
	int i,a[i],j,k,n,p,temp=0,t=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
      for(i=0;i<k;i++)
{		
	for(p=i+1;p<k;p++)
	{
		if(a[i]>a[p])
		{
temp=a[i];
a[i]=a[p];
a[p]=temp;
}
}
}
for(i=0;i<k;i++)
{
	printf("%d\t%d\n",a[i],i);
}
return 0;
}
