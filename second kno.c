#include<stdio.h>
int main(void)

{
	int i,a[i],j,k,n,l,p,temp=0,t=0;
	scanf("%d",&k);
		scanf("%d",&l);
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
	printf("%d\t",a[l]);
return 0;
}
