#include <stdio.h>

int main(void) {
char a[50];
gets(a);
if(printf("%s",a))
return 0;
}
