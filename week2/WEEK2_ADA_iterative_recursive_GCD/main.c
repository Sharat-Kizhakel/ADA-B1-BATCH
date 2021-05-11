#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,ch,res;
    for(;;)
    {
         printf("Enter 2 numbers:\n");
         printf("Enter number 1:\n");
   scanf("%d",&a);
   printf("Enter number 2:\n");
   scanf("%d",&b);
   printf("1.Iterative\n");
   printf("2.Recursive\n");
   printf("Enter the choice:");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
       res=gcd_iter(a,b);
        printf("The gcd of %d and %d is %d",a,b,res);
    break;
   case 2:
       res=gcd_recur(a,b);
       printf("The gcd of %d and %d is %d",a,b,res);
    break;
   }

    return 0;
    }

}
int gcd_recur(int a,int b)
{
    if(b!=0)
        return gcd_recur(b,a%b);
    else
        return a;
}
int gcd_iter(int a,int b)
{int res1;
    for(int i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            res1=i;
        }
    }
    return res1;
}
