#include<stdio.h>
void swap(int *, int *);
void main()
{
int a = 5, b=3;
printf("\n%d\t%d", a, b);
swap(&a,&b);
printf("\n%d\t%d", a, b);
}

void swap(int *x, int *y)
{
int temp;
temp = *x;
*x=*y;
*y=temp;
}
