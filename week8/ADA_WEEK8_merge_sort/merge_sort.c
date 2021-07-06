#include <stdio.h>
#include <time.h>


void merge(int a[],int b[],int c[],int p,int q)
{
    int i=0,j=0,k=0;
    while(i<p && j<q)
    {
        if(b[i]<c[j])
            a[k++]=b[i++];
        else
            a[k++]=c[j++];
    }
    if(i==p)
        for(int l=j;l<q;l++)
            a[k++]=c[l];
    else
        for(int l=i;l<p;l++)
            a[k++]=b[l];
}

void merge_sort(int a[],int n)
{
    if(n>1)
    {
        int c[n/2],b[n/2];
        for(int i=0;i<n/2;i++)
            b[i]=a[i];
        for(int i=0,j=n/2;j<n;i++,j++)
            c[i]=a[j];
        merge_sort(b,n/2);//left subarray
        merge_sort(c,n-n/2);//right subarray
        merge(a,b,c,n/2,n-n/2);
    }
}

int main()
{
    int n;
    int a[30];
    printf("Enter the no of elements:\n");
    scanf("%d",&n);
    
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    clock_t start=clock();
    merge_sort(a,n);
    clock_t stop=clock();
    printf("Sorted array:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nTime taken %d",(stop-start));
}