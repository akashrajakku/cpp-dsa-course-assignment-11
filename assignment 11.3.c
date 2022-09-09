#include<stdio.h>
int prime(int);

int main()
{
    int a,p;
    printf("Enter a number :");
    scanf("%d",&a);
    p=prime(a);
    if(p==1)
    printf("number is not prime");
    else
     printf("number is prime");
 return 0;
}


int prime(int b)
{
    int l,i;
    for(i=2;i<b;i++)
    {
   if(b%i==0)
   {
       l=1;
     break;
   }
   
    }
  return l;
}
    