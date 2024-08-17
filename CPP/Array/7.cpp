//Write a c++ program to delete an element from an array, take index number from the user.  
#include<iostream>
using namespace std;
int main()
{
	int num[100],size,i,index;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	
	cout<<"\nEnter the index number from which you want to delete an element = ";
	cin>>index;
	
	if(index<size)
	{
		cout<<"\nArray before deleting an element = ";
		for(i=0;i<size;i++)
		{
			cout<<num[i]<<" ";
		}
		
		for(i=index;i<size-1;i++)
		{
			num[i] = num[i+1];
		}
		
		cout<<"\nArray after deleting an element = ";
		for(i=0;i<size-1;i++)
		{
			cout<<num[i]<<" ";
		}
	}
	else
	{
		cout<<"\nThere are only "<<size-1<<" index present in an array";
	}
	return 0;
}
