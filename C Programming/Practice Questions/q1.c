#include<stdio.h>
int main()
{
	int size,arr[100],frq[100],i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in arr[%d] = ",i);
		scanf("%d",&arr[i]);
		frq[i] = -1;
	}
	
	for(i=0;i<size;i++)
	{
		int count = 1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				frq[j] = 0;
			}
		}
		if(frq[i]!=0)
		{
			frq[i] = count;
		}
	}
	
	for(i=0;i<size;i++)
	{
		if(frq[i]!=0)
		{
			printf("\n%d occurs %d times",arr[i],frq[i]);
		}
	}
	return 0;
}
