
#include <stdio.h>
int sqr(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf ("square of %d is %d",n,sqr(n));
    return 0;
}
int sqr(int a)
{
    int b;
    b=a*a;
    return b;
    
}