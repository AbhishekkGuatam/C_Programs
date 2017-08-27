/*sum of first n natural number*/
#include<stdio.h>
void main()
{
int n, i;
i=0;
printf("\nEnter the value of n: ");
scanf("%d",&n);
if(n>0)
printf("\nSum of n natural numbers is: ",(n*(n+1)/2));
else printf("\nEnter a valid natural number!");
}
