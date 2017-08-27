/*read until the user enter a positive integer*/
#include<stdio.h>
void main()
{
int n;
do{
printf("\nEnter the value of n: ");
scanf("%d",&n);
}while(n>=0);
}
