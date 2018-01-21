#include<stdio.h>
int main(void) {
	int i,a[i],j,k,n,l,sum=0,t=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
      for(i=0;i<k;i++)
{		
	for(l=i+1;l<k;l++)
	{
		if(a[i]>a[l])
		{
sum=a[i];
a[i]=a[l];
a[l]=sum;
}
}
}


	printf("%d\t",temp);
return 0;
}
