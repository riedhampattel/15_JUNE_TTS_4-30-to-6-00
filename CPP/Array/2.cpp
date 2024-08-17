//Write a c++ program to take an array from the user and copy that in another array
#include<iostream>
using namespace std;
int main()
{
	int num1[100],num2[100],num3[200],i,size1,size2,j;
	cout<<"\nEnter the size of num1 = ";
	cin>>size1;
	
	for(i=0;i<size1;i++)
	{
		cout<<"\nEnter the element in num1["<<i<<"] = ";
		cin>>num1[i];
	}
	
	cout<<"\nEnter the size of num2 = ";
	cin>>size2;
	
	for(i=0;i<size2;i++)
	{
		cout<<"\nEnter the element in num2["<<i<<"] = ";
		cin>>num2[i];
	}
	
	for(i=0;i<size1;i++)
	{
		num3[i] = num1[i];
	}
	
	for(j=0;j<size2;j++)
	{
		num3[i] = num2[j];
		i++;
	}
	
	cout<<"\nArray num1 = ";
	for(i=0;i<size1;i++)
	{
		cout<<num1[i]<<" ";
	}
	
	cout<<"\nArray num2 = ";
	for(i=0;i<size2;i++)
	{
		cout<<num2[i]<<" ";
	}
	
	cout<<"\nArray num3 = ";
	for(i=0;i<size1+size2;i++)
	{
		cout<<num3[i]<<" ";
	}
	return 0;
}
