#include <stdio.h>

int main(void) {
	char a[50];
	int i,n;
	gets(a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
if(i<n)
		printf("%c",a[i]);
	}
	return 0;
}
