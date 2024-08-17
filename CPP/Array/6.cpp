//Write a c++ program to insert an element in unsorted array, take position number and element from the user.
#include<iostream>
using namespace std;
int main()
{
	int num[100],size,i,position,value;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	
	cout<<"\nEnter the value to insert in the array = ";
	cin>>value;
	cout<<"\nEnter the position to enter the value = ";
	cin>>position;

	if(position-1<=size)
	{
		cout<<"\nArray before inserting an element = ";
		for(i=0;i<size;i++)
		{
			cout<<num[i]<<" ";
		}
	
		for(i=size;i>position-1;i--)
		{
			num[i] = num[i-1];
		}
		
		num[position-1] = value;
		cout<<"\nArray after inserting an element = ";
		
		for(i=0;i<=size;i++)
		{
			cout<<num[i]<<" ";
		}
	}	
	else
	{
		cout<<"\ninsertion is only possible upto position number "<<size+1;
	}
	return 0;
}
