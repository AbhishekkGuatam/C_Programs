/*13. iterative program for factorial*/
#include<stdio.h>
void main()
{
int n, fact=1;
printf("\nEnter the value of n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
fact = fact *i;
}
printf("\nThe factorial is %d ", fact);
}
