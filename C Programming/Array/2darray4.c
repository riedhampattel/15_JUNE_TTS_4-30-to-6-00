#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],ans[100][100];
	int row,col,i,j,k;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	printf("\nEnter the col number = ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in arr[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in arr[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nArray a := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nArray b := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			ans[i][j] = 0;
			for(k=0;k<col;k++)
			{
				ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
			}
		}
	}
	
	printf("\nArray ans := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
