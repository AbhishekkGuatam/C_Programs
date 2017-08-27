/*wap to copy input to output*/
#include<stdio.h>
void main()
{
char c;
c = getchar();
while(c!=EOF)
{
putchar(c);
c = getchar();
}
}
