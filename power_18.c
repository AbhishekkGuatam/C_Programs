#include<stdio.h>
int power(int , int );
void main()
{
int n, pow, ans;
printf("\nEnter the Number: ");
scanf("%d",&n);
printf("\nEnter the Power: ");
scanf("%d",&pow);
ans = power(n,pow); 
printf("\n %d : ", ans);
}
int power(int n, int pow)
{
int i, ans=1;
for(i=0; i<pow; i++)
{
ans = ans*n;
}
return ans;
}


