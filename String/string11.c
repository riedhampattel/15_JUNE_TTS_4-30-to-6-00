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
	
	strupr(name1);
	strlwr(name2);
	
	printf("\nString name1 after applying strupr function = %s",name1);
	printf("\nString name2 after applying strlwr function = %s",name2);
	
	return 0;
}
