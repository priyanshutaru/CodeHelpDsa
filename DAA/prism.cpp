#include<iostream>
using namespace std;
int ne=1,min_cost=0;
int main()
{
int n,i,j,min,cost[20][20],a,u,b,v,source,visited[20];
cout<<"Enter the no. of nodes:";
cin>>n;
cout<<"Enter the cost matrix:\n";
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cin>>cost[i][j];
}
}
for(i=1;i<=n;i++)
visited[i]=0;
cout<<"Enter the root node:";
cin>>source;
visited[source]=1;
cout<<"\nMinimum cost spanning tree is\n";
while(ne<n)
{
min=999;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++) 
{
if(cost[i][j]<min)
if(visited[i]==0)
continue;
else
{
min=cost[i][j];
a=u=i;
b=v=j;
}
}
} 
if(visited[u]==0||visited[v]==0)
{
cout<<"\nEdge"<<ne++<<"\t("<<a<<"->"<<b<<")="<<min;
min_cost=min_cost+min;
visited[b]=1;
}
cost[a][b]=cost[b][a]=999;
}
cout<<"\nMinimum cost="<<min_cost<<"\n";
}
