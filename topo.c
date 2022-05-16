#include<stdio.h>
#include<stdlib.h>
int a[20][20],n,visited[10],count=0,w,k=0,top[10];
//int topo[n];
void dfs(int v)
{
count++;
visited[v]=count;
for(w=0;w<n;w++){
if(visited[w]==0 && a[v][w]==1)
dfs(w);
}
top[k++]=v;
printf("%d\t",v);
}                                         
void main()
{
int i,j;
printf("enter no.of vertices");
scanf("%d",&n);
printf("enter the matrices");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}}
printf("matrix is");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
printf("\n........DFS.......\n");
for(i=0;i<n;i++)
visited[i]=0;
for(i=0;i<n;i++)
if(visited[i]==0)
dfs(i);
printf("\n topology setup is \n");
for(i=n-1;i>=0;i--)
printf("%d\n",top[i]);
}
