#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l,h,mid;
    int arr[50],item;
   printf("Enter the number of elements:");
   scanf("%d",&n);
    printf("\nEnter a sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&item);
    l=0;
    h=n-1;
    mid=(l+h)/2;
    while(l<=h)
    {
        if(item<arr[mid])
        {
            h=mid-1;
            mid=(l+h)/2;
        }
        else if(item>arr[mid])
        {
            l=mid+1;
            mid=(l+h)/2;
        }
        else
        {
            printf("%d found at position %d",item,mid+1);
             break;
        }
    }
    if(l>h)
    {
        printf("Element  not found");
    }
    return 0;
}
