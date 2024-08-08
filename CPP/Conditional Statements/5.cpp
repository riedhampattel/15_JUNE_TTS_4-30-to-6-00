//Write a C++ program to check whether a triangle can be formed with the given values for the angles.(additon of all angles should be 180 deg)
#include<iostream>
using namespace std;
int main()
{
	int ang1,ang2,ang3;
	cout<<"\nEnter the value of angle 1 = ";
	cin>>ang1;
	cout<<"\nEnter the value of angle 2 = ";
	cin>>ang2;
	cout<<"\nEnter the value of angle 3 = ";
	cin>>ang3;
	
	if(ang1+ang2+ang3==180)
	{
		cout<<"\nAddition of all the angles is "<<ang1+ang2+ang3<<" so triangle can be formed";
	}
	else
	{
		cout<<"\nAddition of all the angles is "<<ang1+ang2+ang3<<" so triangle can not be formed";
	}
	return 0;
}
