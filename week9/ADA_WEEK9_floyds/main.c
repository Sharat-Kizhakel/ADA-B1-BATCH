#include<stdio.h>
int cost[20][20];
int d[20][20];
int n;
int min(int a,int b){
     if(a>b)
     return b;
     else if(b>a)
     return a;
}
void floyd()
{
     int i,j,k;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
d[i][j]=cost[i][j];
}
}
for(k=1;k<=n;k++)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
}
}
}
void main(){
    int i,j;
    printf("Enter number of vertices:\n");
    scanf("%d",&n);
    printf("Enter cost adjacency matrix:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
   floyd();
    printf("The distance matrix is:\n");
      for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    //modification
  /*  int source,destination;
    printf("Enter the source:");
    scanf("%d",&source);
    printf("Enter the destination:");
    scanf("%d",&destination);
    i=destination;
    while(i!=source)
    {
        printf("%d <-",i);
        i=cost[i][i];
    }
    printf("=",d[source][destination]);*/
}
//note:999 for infinity
/*
 Test Data
0 999 3 999

2 0 999 999

999 7 0 1

6 999 999 0*/
