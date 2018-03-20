#include <stdio.h>

int main(void) {
	int i,a[i],j,k,n,l,temp=0,t=0,v,m;
	scanf("%d",&k);
scanf("%d",&v);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[v-1];
	
     
      for(i=0;i<k;i++)
{		
	for(l=i+1;l<k;l++)
	{
		if(a[i]>a[l])
		{
temp=a[i];
a[i]=a[l];
a[l]=temp;
}
}
}

     for(i=0;i<k;i++)
     {
         if(a[i]<m)
         {
printf("%d\t",a[i]);
}
}
return 0;
}
