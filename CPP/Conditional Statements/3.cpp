//Write a C++ program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"\nEnter the value of x = ";
	cin>>x;
	cout<<"\nEnter the value of y = ";
	cin>>y;
	
	if(x>0 && y>0)
	{
		cout<<"\nThe coordinate point ("<<x<<","<<y<<") lies in the First quadrant.";
	}
	else if(x==0 && y==0)
	{
		cout<<"\nYou are on origin point";
	}
	else if(x<0 && y>0)
	{
		cout<<"\nThe coordinate point ("<<x<<","<<y<<") lies in the second quadrant.";
	}
	else if(x<0 && y<0)
	{
		cout<<"\nThe coordinate point ("<<x<<","<<y<<") lies in the Third quadrant.";
	}
	else
	{
		cout<<"\nThe coordinate point ("<<x<<","<<y<<") lies in the Forth quadrant.";
	}
	
	return 0;
}
