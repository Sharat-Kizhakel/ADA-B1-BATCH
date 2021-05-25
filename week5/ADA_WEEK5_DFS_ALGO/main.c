#include <stdio.h>
#include <stdlib.h>
int adj[10][10],exp[10],vis[10];
 int n,src,count;
void dfs(int v)
{
    vis[v]=1;
    printf("NODE VISITED:%d\n",v);
    for(int i=1;i<=n;i++)
    {
        if(adj[v][i]==1&&vis[i]==0)//shouldnt have been visited and edge must exist
        {
            dfs(i);
        }
    }
}

int main()
{


    printf("Enter the number of vertices:\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
for(int i=1;i<=n;i++)
{
     printf("ROW %d:\n",i);
        for(int j=1;j<=n;j++)
    {
        printf("Enter element %d %d:",i,j);
        scanf("%d",&adj[i][j]);
    }
}

for(int i=1;i<=n;i++)
{
    vis[i]=0;
}

printf("Enter the source vertex:\n");
scanf("%d",&src);
printf("Nodes reachable from %d are:\n",src);
dfs(src);
 for(int i=0;i<n;i++){
  if(vis[i]==1)
    {
        count++;
    }
}
if(count==n)
      {
    printf("Graph is Connected");
      }
 else
    {
    printf("Graph is not Connected");
}
}
