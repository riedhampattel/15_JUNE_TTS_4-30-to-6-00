#include<stdio.h>
int main()
{
	int arr[100],i,sum=0,size;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		sum = sum + arr[i];
	}
	
	printf("\nArray :=");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	printf("\nThe addition of %d elements is %d",size,sum);
	
	return 0;
}
