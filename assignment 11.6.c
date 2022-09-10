#include<stdio.h>
void bwprime(int,int);
int main()
{
    int x,y;
    printf("enter two numbers :");
    scanf("%d %d",&x,&y);
    bwprime(x,y);
return 0;
}
void bwprime(int a,int b)
{
    int i,j;
    for(i=(a>b?b:a)+1;i<(a>b?a:b);i++)
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
        printf("%d ",i);
    }
}
