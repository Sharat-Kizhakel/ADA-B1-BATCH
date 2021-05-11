#include <stdio.h>
#include <stdlib.h>
int linear_search(int arr[],int key,int i,int n)
{


    if(arr[i]==key)
    {
        return i+1;
    }
     else if(i>=n)
    {
        return -1;
    }
    else
    {
       return linear_search(arr,key,i+1,n);
    }
}
void binary_search(int arr[],int l,int r,int key)
{

    if(l>r)
    {
      printf("element not present");
      return;
    }

    int mid=(l+r)/2;
    if(arr[mid]==key)
    {
      printf("Element found at pos:%d",mid);
    }
    else if(key<arr[mid])
    {
        return binary_search(arr,l,mid-1,key);
    }
    else if(key>arr[mid])
    {
       return binary_search(arr,mid+1,r,key);
    }
}
int main()
{
    int ch,flag,n,key;
    int arr[50];
    for(;;)
    {
    printf("\n------------------------------------------");
    printf("\nEnter the number of elements of the array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter element %d\n",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("RECURSIVE SEARCH functions:\n");
    printf("1.LINEAR SEARCH:\n");
    printf("2.BINARY SEARCH:\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter the element to be searched:");
        scanf("%d",&key);
        flag=linear_search(arr,key,0,n);
        if(flag==-1)
        {
            printf("Element not found");
        }
        else
        {
            printf("Element found at index:%d",flag);
        }
        break;
    case 2:
        printf("Enter the element to be searched:");
        scanf("%d",&key);
        binary_search(arr,0,n,key);
        break;
    }
    }
return 0;
}
