/*wap to make a calc using switch*/
#include<stdio.h>
void main()
{
int num1, num2;
char choice;
printf("\nSelect one of following options:");
printf("\npress + for addition");
printf("\npress - for substraction");
printf("\npress * for multiplication");
printf("\npress / for division");
scanf("%c",&choice);
printf("\nenter the first number:");
scanf("%d",&num1);
printf("\nenter the second number");
scanf("%d",&num2);
switch(choice)
{
default: printf("\ninvalid option");
case '+':printf("\nthe sum is %d",num1+num2); break;
case '-':printf("\nthe difference is %d",num1-num2); break;
case '*':printf("\nthe product is %d",num1*num2); break;
case '/':printf("\nthe division is %d",num1/num2); break;
}
}
