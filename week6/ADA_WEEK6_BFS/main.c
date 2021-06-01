#include <stdio.h>
#include <stdlib.h>
int adj[10][10],src,vis[10],n;
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
            printf("Enter element [%d][%d]:",i,j);
            scanf("%d",&adj[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        vis[i]=0;
    }
    printf("Enter the source node:\n");
    scanf("%d",&src);
    printf("The nodes reachable from given node %d are:",src);
    bfs(src);
    return 0;
}
void bfs(int v){
 int i,u;
 int f=0,r=0;
 int q[10];
 vis[v]=1;
 q[r]=v;
while(f<=r){
u=q[f];
printf("%d\t",u);
for(i=1;i<=n;i++)
{
     if(adj[u][i]==1 && vis[i]==0)
        {
          r=r+1;
          q[r]=i;
          vis[i]=1;
        }
}
f++;
}
}
