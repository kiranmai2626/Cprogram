#include <stdio.h>
int main() 
{
    int n, rem,rev=0;
    printf("Enter the numbers:");
    scanf("%d",&n);
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("Reverse of a number is%d",rev);
    return 0;
}
