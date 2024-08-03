#include<stdio.h>
struct Student
{
	int maths20;
	int english20;
	int science20;
	int sanskrit20;
	int computer20;
	
	int maths80;
	int english80;
	int science80;
	int sanskrit80;
	int computer80;
};
int main()
{
	struct Student s1;
	char fname[100],lname[100],schname[100],ch;
	int roll;
	printf("\nEnter the first name = ");
	gets(fname);
	printf("\nEnter the last name = ");
	gets(lname);
	printf("\nEnter the school name = ");
	gets(schname);
	printf("\nEnter the roll number = ");
	scanf("%d",&roll);
	
	printf("\nPlease enter marks of Internal for s1");
	
	printf("\nEnter the marks of maths for s1 = ");
	scanf("%d",&s1.maths20);
	printf("\nEnter the marks of english for s1 = ");
	scanf("%d",&s1.english20);
	printf("\nEnter the marks of science for s1 = ");
	scanf("%d",&s1.science20);
	printf("\nEnter the marks of sanskrit for s1 = ");
	scanf("%d",&s1.sanskrit20);
	printf("\nEnter the marks of computer for s1 = ");
	scanf("%d",&s1.computer20);
	
	printf("\nPlease enter marks of External for s1");
	
	printf("\nEnter the marks of maths for s1 = ");
	scanf("%d",&s1.maths80);
	printf("\nEnter the marks of english for s1 = ");
	scanf("%d",&s1.english80);
	printf("\nEnter the marks of science for s1 = ");
	scanf("%d",&s1.science80);
	printf("\nEnter the marks of sanskrit for s1 = ");
	scanf("%d",&s1.sanskrit80);
	printf("\nEnter the marks of computer for s1 = ");
	scanf("%d",&s1.computer80);
	
	printf("\n-------------------------------------------------------------------------------");
	printf("\nFull Name = %s %s",fname,lname);
	printf("\nRoll no = %d",roll);
	printf("\nSchool Name = %s",schname);
	printf("\n-------------------------------------------------------------------------------");
	printf("\nSr no.   Subject       Marks1(/20)    Marks2(/80)    Total(/100)");
	printf("\n  1      Maths             %d            %d              %d",s1.maths20,s1.maths80,s1.maths20+s1.maths80);
	printf("\n  2      English           %d            %d              %d",s1.english20,s1.english80,s1.english20+s1.english80);
    printf("\n  3      Science           %d            %d              %d",s1.science20,s1.science80,s1.science20+s1.science80);
    printf("\n  4      Sanskrit          %d            %d              %d",s1.sanskrit20,s1.sanskrit80,s1.sanskrit20+s1.sanskrit80);
    printf("\n  5      Computer          %d            %d              %d",s1.computer20,s1.computer80,s1.computer20+s1.computer80);
    printf("\n-------------------------------------------------------------------------------");
    int total = s1.maths20+s1.maths80+s1.english20+s1.english80+s1.science20+s1.science80+s1.sanskrit20+s1.sanskrit80+s1.computer20+s1.computer80; 
    float percentage = (float)total/(float)5;
    printf("\nPercentage = %.2f                                        %d",percentage,total);
    printf("\n-------------------------------------------------------------------------------");
	return 0;
}
