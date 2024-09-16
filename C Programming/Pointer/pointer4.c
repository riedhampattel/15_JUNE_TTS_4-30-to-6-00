#include<stdio.h>
int main()
{
	int num[5] = {1,2,3,4,5};
	int *ptr1=&num;
	int *ptr2=&num[0];
	int *ptr3=&num[1];
	
	printf("\nAddress of num array = %p",ptr1);
	printf("\nAddress of num[0] = %p",ptr2);
	printf("\nAddress of num[1] = %p",ptr3);
	printf("\nAddress of num[2] = %p",&num[2]);
	printf("\nAddress of num[3] = %p",&num[3]);
	printf("\nAddress of num[4] = %p",&num[4]);
	
	printf("\nValue of num[0] = %d",*ptr1);
	printf("\nValue of num[0] = %d",*ptr2);
	return 0;
}
