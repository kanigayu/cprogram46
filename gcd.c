#include<stdio.h>
int main()
{
int n,k,i,x=1;
scanf("%d%d",&n,&k);
for(i=1;i<=k;i++)
{
if((n%i==0)&&(k%i==0))
{
x=x*i;
}
}
printf(" the gcd is %d",x);
return 0;
}
