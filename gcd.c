#include<stdio.h>
#include<math.h>

int gcd(int m, int n)
{
if(n==0)
{
return m;
}
else 
{
gcd(n, m%n);
}
}

void main()
{
int a, b,c;
printf("\n Enter the value of a and b");
scanf("%d",&a);
scanf("%d",&b);
c = gcd(a,b);
printf("\n%d", c);
}

