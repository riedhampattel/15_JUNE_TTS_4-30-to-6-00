#include<stdio.h>
int main()
{
	int num[100],i,j,size,key,count=0;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	
	printf("\nEnter the element you want to search = ");
	scanf("%d",&key);
	
	printf("\nOriginal array = ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",num[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(key==num[i])
		{
			printf("\n%d element is on index %d",num[i],i);
			count++;
		}
	}
	if(count==0)
	{
		printf("\nThere is no matching element in array");
	}
	
	return 0;
}
