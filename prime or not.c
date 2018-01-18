#include <stdio.h>

int main(void) {
	int i,j,sum;
	scanf("%d",&i);
	
	for(j=1;j<=i;j++)
	{
		
			if(i%j==0)
		{	
			sum++;
			
		}
	}
		if(sum==2)
		

	printf("it is prime number");
else

printf("not a prime");


	return 0;
}
