#include<iostream>
using namespace std;
int main()
{
	long int terms,num = 1,i,sum;
	cout<<"\nEnter the terms = ";
	cin>>terms;
	
	for(i=1;i<=terms;i++)
	{
		sum = sum + num;
		num = (num*10) + 1;
	}
	
	cout<<"\nThe addition of series is = "<<sum;
	
	return 0;
}
