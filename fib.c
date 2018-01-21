#include <stdio.h>

int main(void) {
	int i=0,j=1,v,m,l;
	scanf("%d",&m);
	printf("%d\t%d",i,j);
	for(l=2;l<=m;l++)
	{
v=i+j;	
printf("\t%d\t",v);
i=j;
j=v;
}
	return 0;
}
