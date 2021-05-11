#include<stdio.h>
#include <stdlib.h>
#include<time.h>

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
}
int main(){
    int n;
    clock_t start,end;
   double time_taken;
    for(int i=5000;i<=100000;i+=5000)
    {
        n=i;
       int arr1[n];
     srand(time(0));
        printf("Sorting array of %d elements\n",n);
        for (i = 0; i < n; i++)
        {
         arr1[i] =rand()%50;
        }
        start = clock();
        selectionSort(arr1,n);
        end = clock();
        time_taken=(double)(end-start)/CLOCKS_PER_SEC;
        printf("time taken to sort %d elements:%f\n",n,time_taken);
    }


}
