#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,res;
   printf("Enter 2 numbers:\n");
   printf("Enter 1st number:\n");
   scanf("%d",&a);
   printf("Enter 2nd number:\n");
   scanf("%d",&b);
   res=gcd(a,b);
printf("The gcd is %d",res);
}
int gcd(int a,int b)
{
    if(b!=0)
    return gcd(b,a%b);
    else
    return a;
}
