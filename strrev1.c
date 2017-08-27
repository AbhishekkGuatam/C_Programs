/*wap to reverse the words seperated by gap*/
#include<stdio.h>
void main()
{
char a[] = {'a','m','i','t',' ','a','g','g','a','r','w','a','l'};
int count, i;
count = 0;
i=0;
while(a[i]!=' ')
{
i++;
count = 1+ count;
}
for(i=0;i<count-1;i++)
{
a[count] = a[i];
a[i] = a[count-i-1];
a[count-i-1] = a[count];
}
a[count]=' ';
for(i=0;i<13;i++)
printf("%s",&a[i]);
}
