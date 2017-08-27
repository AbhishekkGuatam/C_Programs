#include<stdio.h>
void main()
{
int num, r, count , n , rev = 0 ;
printf("\nEnter the Number: ");
scanf("%d",&num);
n=num;
while(n!=0)
{
r= n%10;
rev = rev * 10 + r;
n/=10;
}
if(rev==num)
{
printf("\nPalindrome");
}
else{
printf("\nNot Palindrome");
}
}
