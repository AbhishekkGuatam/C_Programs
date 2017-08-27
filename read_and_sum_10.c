/*read 15 no but sum only +ve*/
#include<stdio.h>
void main()
{
int n, sum, i;
sum = 0;
for(i=0;i<15;i++){
printf("\nEnter the value of n:");
scanf("%d",&n);
if(n>0)
sum+=n;
else
continue;
}
}
