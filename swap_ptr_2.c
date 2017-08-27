#include<stdio.h>
void swap(int *px, int *py)
{
int temp;
temp = *px;
*px = *py;
*py = temp;
}
void main()
{
int x, y;
printf("\nEnter the value of a; ");
scanf("%d",&x);
printf("\nEnter the value of b");
scanf("%d",&y);
swap(&x, &y);
printf("\nAfter swaping \n a: %d \nb: %d", x, y);
}
