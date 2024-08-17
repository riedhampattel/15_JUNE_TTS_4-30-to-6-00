//Write a c++ program to take element from the user as an input from the user and print the index number of that element.
#include<iostream>
using namespace std;
int main()
{
	int size,num[100],i,count=0,element;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	
	cout<<"\nEnter the element you want to search = ";
	cin>>element;
	
	for(i=0;i<size;i++)
	{
		if(element == num[i])
		{
			cout<<"\n"<<element<<" is present on index number "<<i;
			count++;
		}
	}
	if(count==0)
	{
		cout<<"\n"<<element<<" is not present in an array";
	}
	return 0;
}
