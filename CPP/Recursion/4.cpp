//Write a c++ program to find addition of all the elements present in an array using recursion
#include<iostream>
using namespace std;
int sumarr(int num[],int size)
{
	if(size>=1)
	{
		return num[size-1] + sumarr(num,size-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num[100],size,i;
	cout<<"\nEnter the size of an array  = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	int result = sumarr(num,size);
	cout<<"\nAdditio of all the elements is = "<<result;
	return 0;
}
