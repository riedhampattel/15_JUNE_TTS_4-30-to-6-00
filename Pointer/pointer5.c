#include<stdio.h>
int main()
{
	int num[5] = {1,2,3,4,5},i;
	int *ptr1=&num;
	printf("\nAddress of num = %p",ptr1);
	for(i=0;i<5;i++)
	{
		printf("\nAddress of num[%d] = %p",i,&num[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nValue of num[%d] = %d",i,*(ptr1+i));
	}
	return 0;
}
