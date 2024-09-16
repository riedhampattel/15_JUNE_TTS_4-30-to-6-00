#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("file1.txt","a");
	fprintf(fp1,"This is my second line\n");
	fclose(fp1);
	printf("\nOperation successfull");
	return 0;
}
