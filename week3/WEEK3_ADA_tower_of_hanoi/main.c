#include <stdio.h>
#include <stdlib.h>
void tower_of_hanoi(int n,char src,char temp,char dest);
int main()
{
    int n;
    printf("Enter the number of discs:");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','B','C');
    return 0;
}
void tower_of_hanoi(int n,char src,char temp,char dest)
{
    if(n==1)
    {
        printf("Move disc %d from %c to %c\n",n,src,dest);
    }
    else
    {
    tower_of_hanoi(n-1,src,dest,temp);
     printf("Move disk %d from %c to %c\n",n,src,dest);
     tower_of_hanoi(n-1,temp,src,dest);
    }
}
