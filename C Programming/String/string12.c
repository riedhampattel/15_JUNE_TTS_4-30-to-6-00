#include<stdio.h>
int main()
{
	char name[100];
	int length=0,i;
	printf("\nEnter the string = ");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		length++;
	}
	printf("\nOriginal String is = %s",name);
	printf("\nLength of the string is = %d",length);
	return 0;
}
