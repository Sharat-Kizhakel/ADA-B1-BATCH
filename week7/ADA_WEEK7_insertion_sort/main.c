#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


clock_t start,end;
double time_taken;
int elements[7]={500,1000,1500,7500,8500,10000,20000};
void insertionSort(int arr[], int n)
{
    int i,key, j;
    for(i=1;i<n;i++)
        {
        key=arr[i];
        j=i-1; //current sorted element being compared

        while(j>=0&&arr[j]>key)//if sorted portion greater than present key move down if the condition fails at an index means val at that index is sorted
           {
            arr[j+1]=arr[j];
            j=j-1;
           }//while ends
        arr[j + 1] = key;
       }
}//for ends

int main()
{
    int m,l;
    l=(sizeof(elements)/sizeof(int));
  for(int i=0;i<l;i++)
  {
    m=elements[i];
    int arr[m];//testing for different array sizes
    for(int j=0;j<m;j++)
    {
        arr[j]=rand()%100;
    }
    start=clock();
    insertionSort(arr,m);
    end=clock();
    time_taken =(double)(end-start)/CLOCKS_PER_SEC;
    printf("Sorted array:\n");
     int i;
    for(i=0;i<m;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("\nNo of elements:%d Time taken: %f\n",m,time_taken);

  }
    return 0;
}
