#include<iostream>
using namespace std;
int main()
{
	int num,i,prime,count,j;
	cout<<"\nEnter the number = ";
	cin>>num;
	
	for(i=1;i<num;i++)
	{
		count = 0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			prime = i; 
		}
	}
	cout<<"\nLast prime number = "<<prime;
	return 0;
}
