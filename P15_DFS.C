#include<stdio.h>
#include<stdlib.h>
int source,v,e,visited[20],g[20][20];
void DFS(int i)
{
	int j;
	visited[i]=1;
	printf("%d->",i+1);
	for(j=0;j<v;j++)
	{
	if (g[i][j]==1 && visited[j]==0)
	DFS(j);
	}
}
int main()
{
	int i,j,v1,v2;
	printf("\t\t\t graphs\n");
	printf("Enter the number of edges :");
	scanf("%d",&e);
	printf("Enter the number of vertices :");
	scanf("%d",&v);
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		g[i][j]=0;
	}
	for(i=0;i<e;i++)
	{
		printf("Enter the format :v1 v2:");
		scanf("%d%d",&v1,&v2);
		g[v1-1][v2-1]=1;
	}
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		printf("%d",g[i][j]);
		printf("\n");
	}
	printf("Enter the source :");
	scanf("%d",&source);
	DFS(source-1);
	getch();
return 0;
}