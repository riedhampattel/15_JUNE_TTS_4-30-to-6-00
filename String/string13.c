#include<stdio.h>
int main()
{
	char name[100],rev[100];
	int length=0,i,j=0;
	printf("\nEnter the string = ");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		length++;
	}
	for(i=length-1;i>=0;i--)
	{
		rev[j]=name[i];
		j++;
	}
	printf("\nOriginal string = %s",name);
	printf("\nRevrse string = %s",rev);
	return 0;
}
