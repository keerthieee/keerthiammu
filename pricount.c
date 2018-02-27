#include <stdio.h>

int main(void) {
	int i,j,a,b,s=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		s=0;
	for(j=1;j<b;j++)
		{
			if(i%j==0)
			
			s++;
			
	}
	
}
	printf("%d\t",s);

	
	
	return 0;
}
