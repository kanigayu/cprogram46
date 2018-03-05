#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int i,j,count=1;
scanf("%s",a[i]);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[i]!='\0';j++)
{
if(a[i]==a[j])
{
count++;
}
else
{
count=1;
}
}
}
if(count==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
