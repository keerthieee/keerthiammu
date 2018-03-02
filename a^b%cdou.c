#include <stdio.h>
#include<math.h>
int main(void) {
int a,b,d;
long int c;
scanf("%d%d%lf",&a,&b,&c);
d=pow(a,b);
printf("%d",d%c);
	return 0;
}
