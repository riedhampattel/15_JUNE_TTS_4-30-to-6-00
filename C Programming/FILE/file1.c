#include<stdio.h>
int main()
{
	FILE *fp1;
	FILE *fp2;
	FILE *fp3;
	
	fp1 = fopen("file1.txt","w");
	fprintf(fp1,"This is my first file");
	fclose(fp1);
	
	fp2 = fopen("file2.txt","w");
	fprintf(fp2,"This is my second file");
	fclose(fp2);
	
	fp3 = fopen("file3.txt","w");
	fprintf(fp3,"This is my third file");
	fclose(fp3);
	
	printf("\nOperation successfull");
	return 0;
}
