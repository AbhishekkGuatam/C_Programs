#include<stdio.h>
#include<math.h>
void main()
{
int n, n1, r, count = 0, sum = 0;
n1=n;
printf("\nEnter the number: %d ");
scanf("%d",&n);
while(n1!=0)
{
n1/=10;
++count;
}
printf("\nThe no of digit is : %d", count);
n1=n;
while(n1!=0)
{
r=n1%10;
sum=sum+pow(r,count);
n1/=10;
}
if(n==sum)
printf("\n Armstrong :)");
}
