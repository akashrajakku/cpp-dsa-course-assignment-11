#include<stdio.h>
int nxprime(int);
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    printf ("next prime number is %d",nxprime(n));
return 0;
}
int nxprime(int a)
{
    int i,j;
    for(i=a+1; ;i++)
    {
        int flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
            flag=1;
            break;
            }
        }
        if(flag==0)
       return i;
    }
}
