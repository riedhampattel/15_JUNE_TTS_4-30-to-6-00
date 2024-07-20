#include<stdio.h>
int main()
{
	int num[100],i,j,size,temp;
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
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(num[i]>num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp; 
			}
		}
	}
	printf("\nArray in acesending order = ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",num[i]);
	}
	return 0;
}
