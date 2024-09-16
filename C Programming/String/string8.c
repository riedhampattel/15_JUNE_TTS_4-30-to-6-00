#include<stdio.h>
#include<string.h>
int main()
{	
	char name1[100],name2[100];
	printf("\nEnter the name1 = ");
	gets(name1);
	
	printf("\nString name1 = %s",name1);
	printf("\nString name2 before copy = %s",name2);
	
	strcpy(name2,name1);
	
	printf("\nString name2 after copy = %s",name2);
	
	return 0;
}
