#include<stdio.h>
int main()
{
int n,i;
long int fact=1;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%ld",fact);
return 0;
}
