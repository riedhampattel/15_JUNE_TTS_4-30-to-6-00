#include<iostream>
using namespace std;
int main()
{
	int num,sum,rem;
	cout<<"\nEnter the value of num = ";
	cin>>num;
	
	while(num!=0)
	{
		rem = num%10;
		sum = sum + rem;
		num = num/10;
	}
	
	cout<<"\nThe addition of all digits is = "<<sum;
	
	return 0;
}
