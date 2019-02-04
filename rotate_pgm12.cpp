#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
int n,d,i,ro,s,r;
printf("enter a number:");
scanf("%d",&n);
d=log10(n);
scanf("%d",&ro);
for(i=0;i<ro;i++)
{
r=n%10;
n=n/10;
s=r*pow(10,d)+n;
n=s;
}
printf("%d",n);
return 0;
}