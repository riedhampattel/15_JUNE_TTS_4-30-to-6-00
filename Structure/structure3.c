#include<stdio.h>
struct Student
{
	int id;
	float percentage;
	char grade;
};
int main()
{
	struct Student s[100];
	int count,i;
	printf("\nEnter the count = ");
	scanf("%d",&count);
	
	for(i=0;i<count;i++)
	{
		printf("\nEnter the id of student%d = ",i+1);
		scanf("%d",&s[i].id);
		printf("\nEnter the Percentage of student%d = ",i+1);
		scanf("%f",&s[i].percentage);
		printf("\nEnter the Grade of student%d = ",i+1);
		scanf(" %c",&s[i].grade);
	}
	
	for(i=0;i<count;i++)
	{
		printf("\nId of student%d = %d",i+1,s[i].id);
		printf("\nPercentage of student%d = %.2f",i+1,s[i].percentage);
		printf("\nGrade of student%d = %c",i+1,s[i].grade);
		printf("\n");
	}
	
	return 0;
}
