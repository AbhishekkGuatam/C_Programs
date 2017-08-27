
#include<stdio.h>
void stringcpy(char *s, char *t)
{
while(*t++=*s++);
}
void main()
{
char s[100], t[100];
printf("\n Enter the string: ");
gets(s);
stringcpy(s, t);
printf("\n The string is : %s \n", t);
}

/*
#include<stdio.h>

void copy_string(char*, char*);

main()
{
    char source[100], target[100];    
    printf("Enter source string\n");    
    gets(source);    
    copy_string(target, source);    
    printf("Target string is \"%s\"\n", target);    
    return 0;
}

void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}
*/
