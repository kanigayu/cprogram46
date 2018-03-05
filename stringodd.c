#include<stdio.h>
#include<string.h>
int main()
{
char k[10];
int i;
scanf("%s",&k[i]);
printf("even \n");
for(i=0;k[i]!='\0';i++)
{
if(i%2!=0)
{
printf("%c\n",k[i]);
}
}
printf("odd \n");
for(i=0;k[i]!='\0';i++)
{
if((i%2==0))
{
printf("%c\n",k[i]);
}
}
return 0;
}
