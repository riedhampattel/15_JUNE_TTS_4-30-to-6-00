#include<stdio.h>
int main()
{
	int num[100],i,j,size,count;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	printf("\nOriginal array = ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",num[i]);
	}
	printf("\nUnique elements = ");
	for(i=0;i<size;i++)
	{
		count=0;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(num[i]==num[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			printf("%d\t",num[i]);			
		}
	}
	return 0;
}
