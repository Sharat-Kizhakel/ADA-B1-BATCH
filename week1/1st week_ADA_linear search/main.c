#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,item;
    int flag=0;
    int arr[50];
    printf("\nEnter the number of elements:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("Enter element %d:",i+1);
    scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&item);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==item)
        {
            printf("Element %d found at position %d",item,j+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element not found");
    }

    return 0;
}
