//Write a c++ program to take an array from the user and copy that in another array
#include<iostream>
using namespace std;
int main()
{
	int num[100],copy[100],size,i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	
	for(i=0;i<size;i++)
	{
		copy[i] = num[i];
	}
	
	cout<<"\nArray num = ";
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	
	cout<<"\nArray copy = ";
	for(i=0;i<size;i++)
	{
		cout<<copy[i]<<" ";
	}
	return 0;
}
