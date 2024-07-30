#include<stdio.h>
int main()
{
	FILE *fp1;
	char string[500];
	fp1 = fopen("Practice3.txt","r");
	while(fgets(string,500,fp1))
	{
		printf("%s",string);
	}
	fclose(fp1);
	return 0;
}
