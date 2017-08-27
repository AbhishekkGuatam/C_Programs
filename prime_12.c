/*to check prime or not*/
#include<stdio.h>
void main()
{
int n , i, flag;
flag=0;
printf("\n enter the value to be checked: ");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
flag=1;
}
(flag==0)?printf("\nThe number is prime"):printf("\nThe number is not a prime");
}
