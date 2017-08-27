/*Wap to calculate length of string*/
#include<stdio.h>
/*
int strlength(char s[]){
int i, count = 0;
i=0;
while(s[i]!='\0'){
count+=1;
i=i+1;
}
printf("\nThe length of string is %d.", count);
}
*/
void main()
{
int count=0;
int i;
i=0;
char s[100];
printf("Enter the charecter String: ");
scanf("%s", &s);
while(s[i]!='\0'){
count+=1;
i=i+1;
}
printf("\nThe length of string is %d.", count);
}

