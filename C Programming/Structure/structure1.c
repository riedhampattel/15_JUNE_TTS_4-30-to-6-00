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
	
	s1.id = 101;
	s1.percentage = 98.8;
	s1.grade = 'A';
	printf("\nStudent id = %d",s1.id);
	printf("\nStudent Percentage = %.2f",s1.percentage);
	printf("\nStudent Grade = %c",s1.grade);
	
	s2.id = 102;
	s2.percentage = 58.8;
	s2.grade = 'B';
	printf("\nStudent id = %d",s2.id);
	printf("\nStudent Percentage = %.2f",s2.percentage);
	printf("\nStudent Grade = %c",s2.grade);
	return 0;
}
