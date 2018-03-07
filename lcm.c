#include<stdio.h>
int main()
{
int a,b,n,i,gcd,lcm;
scanf("%d\t%d\t%d",&a,&b,&n);
for(i=1;i<n;i++)
{
if(a%i==0 && b%i==0)
{
gcd=i;
}
}
lcm=(a*b)/gcd;
printf("%d",lcm);
return 0;
}
