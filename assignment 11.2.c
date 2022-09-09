#include<stdio.h>
int lcm(int,int);
int hcf(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers you want HCF of :");
    scanf("%d %d",&a,&b);
    printf("HCF is %d",hcf(a,b));
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

int hcf(int c,int d)
{
    int e,t;
    t=lcm(c,d);
    e= (c*d)/t;
    return e;
}