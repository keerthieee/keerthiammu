#include<stdio.h>

int main() {
  int b,count=0,v;
  scanf("%d",&b);
  for(v=1;v<=b;v++)
  {
  	if(b/v==v)
  	count++;
  }
  if(count>=1)
              printf("yes");
              else
              printf("no");
              
      return 0;
  }
