#include <stdio.h>

int main(void) {
	int i,a[i],j,k,n,l,temp=0,t=0,sum=1;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
      for(i=0;i<k;i++)
{		
	for(l=i+1;l<k;l++)
	{
		if(a[i]<a[l])
		{
temp=a[i];
a[i]=a[l];
a[l]=temp;
}
}
}
 for(i=0;i<k;i++)
     {
        sum=sum*a[i];
}
printf("%d",sum);
return 0;
}
