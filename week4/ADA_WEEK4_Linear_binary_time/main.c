#include<stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start1,end1,start2,end2;
double time_taken,time_taken1;
void selectionSort(int arr1[],int n){
    int i,min,pos,temp,j;
    for(i=0;i<=n-2;i++){
        min=arr1[i];
        pos=i;
        for(j=i+1;j<=n-1;j++){
            if(arr1[j]<=min){
                min=arr1[j];
                pos=j;
            }
        }
        temp=arr1[i];
        arr1[i]=arr1[pos];
        arr1[pos]=temp;
    }
    return;
}
int linearSearch(int arr[],int l,int r,int key)
{
     if(l>r)
        return -1;
     if(arr[l]==key)
        return l;
     if(arr[r]==key)
        return r;
     return linearSearch(arr,l+1,r-1,key);
}
int recBinarySearch(int arr[],int l,int r,int key)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]>key)
        return recBinarySearch(arr,l,mid-1,key);
        return recBinarySearch(arr,mid+1,r,key);
    }
    return -1;
}
int main()
{
    int n;
    int key,res,ch;
    printf("1.LINEAR SEARCH\n2.BINARY SEARCH\n");
    scanf("%d",&ch);
    for(;;)
    {
    switch(ch)
    {
    case 1:
    for(int i=5000;i<=60000;i+=10000)
    {
      n=i;
       int arr1[n];
     srand(time(0));
        for(i=0;i<n;i++)
        {
         arr1[i]=rand()%50;
        }
    printf("\n\nEnter key:\n");
    scanf("%d",&key);
    start1=clock();
    res=linearSearch(arr1,0,n-1,key);
    end1=clock();
     time_taken=(double)(end1-start1)/CLOCKS_PER_SEC;
        if(res==-1)
        {
            printf("Element not present for array-size %d\ntime taken %f",n,time_taken);
        }
        else
        {
            printf("Element present at pos %d\nfor array-size %d\ntime taken %f",res,n,time_taken);
        }
    }
    break;
    case 2:
    for(int i=5000;i<=60000;i+=10000)
    {
        n=i;
        int arr1[n];
        srand(time(0));
        for(i=0;i<n;i++)
        {
         arr1[i]=rand()%50;
        }
        selectionSort(arr1,n);
         printf("\n\nEnter key:\n");
         scanf("%d",&key);
         start2=clock();
         res=recBinarySearch(arr1,0,n-1,key);
         end2=clock();
         time_taken1=(double)(end2-start2)/CLOCKS_PER_SEC;
         if(res==-1)
        {
            printf("Element not present for array-size %d\ntime taken %f",n,time_taken1);
        }
        else
        {
            printf("Element present at pos %d\nfor array-size %d\ntime taken %f",res,n,time_taken1);
        }
       }
     break;
  return 0;
    }
    }
    }

