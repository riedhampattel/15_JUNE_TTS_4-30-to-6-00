//Write a c++ program to insert an element in unsorted array, take index number and element from the user. 
#include<iostream>
using namespace std;
int main()
{
	int num[100],size,i,index,value;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	
	cout<<"\nEnter the value to insert in the array = ";
	cin>>value;
	cout<<"\nEnter the index number to enter the value = ";
	cin>>index;
	
	if(index<=size)
	{
		cout<<"\nArray before inserting an element = ";
		for(i=0;i<size;i++)
		{
			cout<<num[i]<<" ";
		}
	
		for(i=size;i>index;i--)
		{
			num[i] = num[i-1];
		}
		
		num[index] = value;
		cout<<"\nArray after inserting an element = ";
		
		for(i=0;i<=size;i++)
		{
			cout<<num[i]<<" ";
		}
	}
	else
	{
		cout<<"\ninsertion is only possible upto index number "<<size;
	}
	return 0;
}
