#include <stdio.h>

int main(void) {
int v,k,count;
scanf("%d",&v);
while(v>0)
{
k=v%10;
count++;
v=v/10;
}

	printf("%d",count);

return 0;
}
