#include<stdio.h>
int main()
{
	int arr[100][100],i,j,row,col,trs[100][100];
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	printf("\nEnetr the col number = ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nOriginal Array := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			trs[j][i] = arr[i][j];
		}
	}
	printf("\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ",trs[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
