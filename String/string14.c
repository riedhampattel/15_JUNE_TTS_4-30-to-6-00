#include<stdio.h>
int main()
{
	char name[100],copy[100];
	int i;
	printf("\nEnter the string = ");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		copy[i] = name[i];
	}
	printf("\nOriginal string = %s",name);
	printf("\nCopied string = %s",copy);
	return 0;
}
