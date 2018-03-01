#include<stdio.h>
int main(void)

{
	char a[50]; 
	int i,count=0;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		count++;

	}

	printf("%d\t",count);
return 0;
}
