#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}//factorial function
int search(int arr[],int n,int m)
{
    for(int i=0;i<n;i++)
	{
		if(arr[i]==m)
			return i+1;
	}
	return -1;
}
int get_mobile_comp(int arr[],int dir[],int n)
{
    int mobile_max=0;//to maintain max mobile val
    int mobile=0;//to hold prev max mobile component values

    for(int i=0;i<n;i++)
    {//pointing to left case
        if(dir[arr[i]-1]==0 && i!=0)//checking for left most and correcting index
        {
            if(arr[i]>arr[i-1]&& arr[i]>mobile)//greater than element on immediate left and greater than the current max mobile element
            {
                mobile_max=arr[i];
                mobile=mobile_max;
            }
        }
        if(dir[arr[i]-1]==1 && i!=n-1)//checking for right most and correcting index
        {
            if(arr[i]>arr[i+1]&& arr[i]>mobile)//greater than element to immediate right
            {
                mobile_max=arr[i];
                mobile=mobile_max;
            }
        }

    //pointing to right
    }
    //considering case where no mobile components are left i.e end
    if(mobile==0&&mobile_max==0)
    {
        return 0;
    }
    else

        return mobile_max;

}
void no_perm(int arr[],int dir[],int n)
{
    int pos,temp;
    int m=get_mobile_comp(arr,dir,n);

     pos=search(arr,n,m);
    if(dir[arr[pos-1]-1]==0)//if its R TO L
    {
        temp=arr[pos-1];
        arr[pos-1]=arr[pos-2];
        arr[pos-2]=temp;
    }
    else
    {//IF ITS L TO R
        temp=arr[pos-1];
        arr[pos-1]=arr[pos];
        arr[pos]=temp;
    }
    //checking if there is an element greater than max mobile element
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            if(dir[arr[i]-1]==0)//correcting index
            {
                dir[arr[i]-1]=1;//changing to L TO R
            }
            else
            {
                dir[arr[i]-1]=0;//changing  to R TO L
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);//displaying the permutation
    }
     printf("\n");
}
int main()
{
    int n;
     printf("Enter n value:");
    scanf("%d",&n);
    int arr[4];
    int dir[4];

    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
        dir[i]=0;
        printf("%d ",arr[i]);//initial permutation

    }
    printf("\n");
    //computing till its factorial
    for(int i=1;i<fact(n);i++)//starting from 1 since 1st permutation done
    {
        no_perm(arr,dir,n);
    }
    return 0;
}
