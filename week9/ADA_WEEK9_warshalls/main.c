#include <stdio.h>
#include <stdlib.h>
int adj[20][20];
int path[20][20];
int n;
void warshall()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
      path[i][j]=adj[i][j];//copying adjacency matrix into path matrix first
        }
    }
  for(int k=1;k<=n;k++)//looping over the vertices
  {
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if(path[i][j]!=1&&(path[i][k]==1&&path[k][j]==1))
            {
                path[i][j]=1;
            }
          }
      }
  }
}//function ends
int main()
{
    printf("Enter the number of vertices:\n");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the adjacency matrix:\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
        printf("\n");
    }//done accepting adj
    warshall();
    printf("The path matrix is:\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d\t",path[i][j]);
        }
        printf("\n");//row wise
    }
printf("\n");
int cycles=0//to detect cycles
for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
      if(path[i][j]==1 && i==j)
      {
        cycles++;
      }
        }
    }
    printf("The number of cycles detected in the graph are: %d",cycles);
}

/*DEMO DATA

  0 1 0 0
  0 0 0 1
  0 0 0 0
  1 0 1 0



  The path matrix is:
1       1       1       1
1       1       1       1
0       0       0       0
1       1       1       1
*/
