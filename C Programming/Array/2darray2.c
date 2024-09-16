#include<stdio.h>
int main()
{
	int arr[100][100],row,col,i,j;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	printf("\nEnter the col number = ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
