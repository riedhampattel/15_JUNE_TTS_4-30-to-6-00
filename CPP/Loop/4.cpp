#include<iostream>
using namespace std;
int main()
{
	int num1,num2,i,gcd;
	cout<<"\nEnter the value of num1 = ";
	cin>>num1;
	cout<<"\nEnter the value of num2 = ";
	cin>>num2;
	
	int count = num1<num2 ? num1:num2;
	
	for(i=1;i<=count;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd = i;
		}
	}
	cout<<"\nGCD of "<<num1<<" and "<<num2<<" is "<<gcd;
	return 0;
}
