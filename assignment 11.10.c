
#include <stdio.h>
int fact(int);
int sum(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("sum of series is %d",sum(n));
    return 0;
}
int sum(int q)
{
    int i,b=0;
   for(i=1;i<=q;i++)
   b=b+(fact(i)/i);
    return b;
}
int fact(int x)
{
   int p=1,i;
   for(i=1;i<=x;i++)
   p=p*i;
   return p;
}