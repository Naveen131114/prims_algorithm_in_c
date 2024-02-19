//construct a minimum spanning tree use prim's algorithm

#include<stdio.h>
#include<conio.h> //both are header files that includes a library

int n,i,j,ned=1,min,a,b,v,u; 
int cost[10][10],visited[10]={0},mincost=0; //both are variable declaration

void main() 
{ 
	printf("\nEnter the number of nodes:");
	scanf("%d",&n);
			//get node size from the user
			
	printf("\nEnter the adjacency matrix elements:\n");
	for(i=1;i<=n;i++)
	{
		printf("enter row %d elements\n",i);
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);	//get the adjacency matrix elements from the user 
		}
	}
			//dummy print 
	printf("the matrix elements are: \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		printf("%d ",cost[i][j]);			
		}
		printf("\n");
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(cost[i][j]==0)
			cost[i][j]=2000;			
		}
		visited[1]=1;
	}
		
	
	while(ned < n) 
	{
		for(i=1,min=2000;i<=n;i++)
 		{
			for(j=1;j<=n;j++)
			{			
				if(cost[i][j]< min)
                {
					if(visited[i]!=0) //visited[i]=1 na ulla pogum
					{
						min=cost[i][j];
						a=u=i;
						b=v=j;
 					}
 					if(visited[u]==0 || visited[v]==0)
 					{
						printf("\n Edge %d:(%d %d) cost:%d",ned++,a,b,min);
						mincost+=min;
						visited[b]=1; 
					}
				}
 			}cost[a][b]=cost[b][a]=2000;
 		}
 	}
	printf("\n Minimun cost=%d",mincost); 	
}
 
