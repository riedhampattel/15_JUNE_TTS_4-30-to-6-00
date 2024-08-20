//Write a c++ program to find nth element of fibonnaci series using recursion
#include<iostream>
using namespace std;
int fibonnaci(int range)
{
	if(range==0)
	{
		return 0;
	}
	else if(range==1)
	{
		return 1;
	}
	else
	{
		return fibonnaci(range-1) + fibonnaci(range-2);
	}
}
int main()
{
	int range;
	cout<<"\nEnter the number = ";
	cin>>range;
	int result = fibonnaci(range);
	cout<<"\nnth element of fibonnaci series is = "<<result;
	return 0;
}
