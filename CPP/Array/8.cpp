//Write a c++ program to delete an element from an array, take element number from the user.
#include<iostream>
using namespace std;
int main()
{
	int num[100],size,i,index,element,count=0;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	
	cout<<"\nEnter the element from which you want to delete an element = ";
	cin>>element;
	
	for(i=0;i<size;i++)
	{
		if(element == num[i])
		{
			index = i;
			count++;
		}
	}
	if(count!=0)
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
		cout<<"\n"<<element<<" is not present in an array";
	}
	return 0;
}
