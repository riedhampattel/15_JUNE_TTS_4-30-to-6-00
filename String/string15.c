#include<stdio.h>
int main()
{
	char name1[100],name2[100];
	int i,length1=0,length2;
	printf("\nEnter the string1 = ");
	gets(name1);
	printf("\nEnter the string2 = ");
	gets(name2);
	
	for(i=0;name1[i]!='\0';i++)
	{
		length1++;
	}
	for(i=0;name2[i]!='\0';i++)
	{
		length2++;
	}
	i=0;
	printf("\nLength1 = %d",length1);
	printf("\nOriginal String1 = %s",name1);
	printf("\nOriginal String2 = %s",name2);
	while(name2[i]!='\0')
	{
		name1[length1] = name2[i];
		i++;
		length1++;
	}
	printf("\nConcated String = %s",name1);
	return 0;
}
