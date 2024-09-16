#include<stdio.h>
#include<string.h>
int main()
{	
	char name1[100],name2[100];
	printf("\nEnter the name1 = ");
	gets(name1);
	printf("\nEnter the name2 = ");
	gets(name2);
	
	printf("\nString name1 = %s",name1);
	printf("\nString name2 = %s",name2);
	
	strcat(name1,name2);
	printf("\nMerged string = %s",name1);
	
	return 0;
}
