#include<stdio.h>

int main() {
  int n,a[10],c,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
  for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
{
c=a[i]|a[j];
	}

              printf("%d",c);
              
      return 0;
  }
