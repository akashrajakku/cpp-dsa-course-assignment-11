#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers you want LCM of :");
    scanf("%d %d",&a,&b);
    printf("LCM is %d",lcm(a,b));
    return 0;
}

int lcm(int x,int y)
{
    int l,p;
     for(l=(x>y?x:y);l<=x*y;l=l+(x>y?x:y))
    {
        if(l%x==0 && l%y==0)
        p=l;
        break;
    }
    return p;
}