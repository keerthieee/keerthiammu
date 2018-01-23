#include <stdio.h>

int main(void) {
	int k,v,sum,i;
	scanf("%d",&k);
	
	for(v=1;v<=k;v++)
	{
		
			if(k%v==0)
		{	
			sum++;
			
		}
	}
		if(sum!=2)
		

	printf("it is composite number");
else

printf("not a composite number");


	return 0;
}
