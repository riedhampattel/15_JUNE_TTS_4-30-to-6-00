//Write a C++ program to read the roll no, name and marks of three subjects and calculate the total, percentage and grade.
#include<iostream>
using namespace std;
int main()
{
	int roll;
	string name;
	int maths,english,science;
	
	cout<<"\nEnter the roll no = ";
	cin>>roll;
	cout<<"\nEnter the name = ";
	cin>>name;
	cout<<"\nEnter the marks for maths = ";
	cin>>maths;
	cout<<"\nEnter the marks for english = ";
	cin>>english;
	cout<<"\nEnter the marks for science = ";
	cin>>science;
	
	int total = maths + english + science;
	float per = (float)total*0.24;
	
	cout<<"\nStudent roll number = "<<roll;
	cout<<"\nStudent name = "<<name;
	cout<<"\nStudent's total marks = "<<total;
	cout<<"\nStudent's percentage  = "<<per;
	if(per>=1 && per<=45)
	{
		cout<<"\nYour grade is = C";
	}
	else if(per>=46 && per<=80)
	{
		cout<<"\nYour grade is = B";
	}
	else
	{
		cout<<"\nYour grade is = A";
	}
	
	return 0;
}
