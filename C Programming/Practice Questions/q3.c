#include<stdio.h>
int main()
{
	FILE *fp1;
	int start,end,i,j;
	fp1 = fopen("prime.txt","a");
	fprintf(fp1,"------------------------------------------------------------------------\n");
	printf("\nEnter the starting value = ");
	scanf("%d",&start);
	fprintf(fp1,"Enter the starting value = %d\n",start);
	printf("\nEnter the ending value = ");
	scanf("%d",&end);
	fprintf(fp1,"Enter the ending value = %d\n",end);
	fprintf(fp1,"Prime numbers = ");
	for(i=start;i<=end;i++)
	{
		int count = 0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			fprintf(fp1,"%d ",i);
		}
	}
	
	fprintf(fp1,"\nNon Prime numbers = ");
	for(i=start;i<=end;i++)
	{
		int count = 0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count!=0)
		{
			fprintf(fp1,"%d ",i);
		}
	}
	fprintf(fp1,"------------------------------------------------------------------------\n");
	fclose(fp1);
	printf("\nOperation Successful");
	return 0;
}
