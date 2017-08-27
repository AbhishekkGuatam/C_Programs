#include<stdio.h>
void main()
{
int n, count = 0;
printf("\nEnter the number: ");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("\nThe no of digit is : %d", count);
}
