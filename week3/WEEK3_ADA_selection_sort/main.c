#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[50];
   int i,j,temp,pos,n;
   printf("Enter the number of elements:\n");
   scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[pos]>arr[j])
            {
                pos=j;
            }
        }
        if(pos!=i)
        {
            temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
        }
    }
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
