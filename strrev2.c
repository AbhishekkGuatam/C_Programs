/*wap to swap 2 words*/
#include<stdio.h>
void swap(char *str1, char *str2)
{
char *temp = str2;
str2 = str1;
str1 = temp;
printf("%s %s", str1, str2);
}
void main()
{
char *str1 = "amit";
char *str2 = "aggarwal";
swap(str1, str2);
}

