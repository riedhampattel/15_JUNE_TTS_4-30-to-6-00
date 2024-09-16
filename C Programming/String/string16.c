#include<stdio.h>
int main()
{
	char name1[100],name2[100];
	int i,count=0;
	printf("\nEnter the string1 = ");
	gets(name1);
	printf("\nEnter the string2 = ");
	gets(name2);
	
	printf("\nOriginal String = %s",name1);
	printf("\nOriginal String = %s",name2);
	
	for(i=0;name1[i]!='\0';i++)
	{
		if(name1[i]!=name2[i])
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("\nBoth String are equal");
	}
	else
	{
		printf("\nBoth String are different");
	}
	return 0;
}
