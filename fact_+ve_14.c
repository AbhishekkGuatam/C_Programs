/*wap to find fact of long +ve int*/
#include<stdio.h>
void main()
{
unsigned long long fact =1;
unsigned long long int i, n;
printf("\nEnter the value of n");
scanf("%llu",&n);
printf("\n Sizze = %d",sizeof(fact));
/*
if(n<0)
printf("\nEntered Number is not +ve");
else if(n>0)
{
*/
for(i=1;i<=n;i++)
{
fact = fact * i;
} 
printf("\nThe Factorial is %llu",fact);
}
