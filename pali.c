#include <stdio.h>

int main(void) {
	int n,i,r=0,k;
scanf("%d",&n);
whi
{
k=n%10;
r=r*10+k;
n=n/10;
}
if(n==r)
{
printf("number is palindrome");
}
else
{
printf("number is not a palindrome");
}
	return 0;
  }
