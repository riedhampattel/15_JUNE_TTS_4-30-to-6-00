#include<stdio.h>
struct Student
{
	int id;
	float percentage;
	char grade;
};
int main()
{
	struct Student s1,s2;
	
	printf("\nEnter the id = ");
	scanf("%d",&s1.id);
	printf("\nEnter the Percentage = ");
	scanf("%f",&s1.percentage);
	printf("\nEnter the Grade = ");
	scanf(" %c",&s1.grade);
	
	printf("\nEnter the id = ");
	scanf("%d",&s2.id);
	printf("\nEnter the Percentage = ");
	scanf("%f",&s2.percentage);
	printf("\nEnter the Grade = ");
	scanf(" %c",&s2.grade);
	
	printf("\nStudent id = %d",s1.id);
	printf("\nStudent Percentage = %.2f",s1.percentage);
	printf("\nStudent Grade = %c",s1.grade);
	
	printf("\nStudent id = %d",s2.id);
	printf("\nStudent Percentage = %.2f",s2.percentage);
	printf("\nStudent Grade = %c",s2.grade);
	return 0;
}
