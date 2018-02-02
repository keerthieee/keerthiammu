#include <stdio.h>

int main(void) {
int a,b,c,d,e,f,g,h;
float i;
scanf("%d%d%d%d",&a,&b,&c,&d);
e=a-b;
g=e*60;
f=c-d;
h=g+f;
if(h>=60)
{
	i=h/60;
printf("%d hour %d minute",e,i);
}
else
{
	printf("%dminutes",h);
}
	return 0;
}
