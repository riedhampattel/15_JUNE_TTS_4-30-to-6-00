//Write a c++ program to take index number as an input from the user and print the element present on that index number.
#include<iostream>
using namespace std;
int main()
{
	int num[100],index,i,size;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	
	cout<<"\nEnter the index number = ";
	cin>>index;
	
	cout<<"\nArray num = ";
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	
	if(index<size)
	{
		cout<<"\n"<<num[index]<<" is present on index number "<<index;
	}
	else
	{
		cout<<"\nThere are only "<<size-1<<"index in an array";
	}
	return 0;
}
