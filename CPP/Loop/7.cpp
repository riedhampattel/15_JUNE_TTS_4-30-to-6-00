#include<iostream>
using namespace std;
int main()
{
	int i,j,k,spc;
	spc = 4;
	for(i=1;i<=5;i++)
	{
		for(j=spc;j>=1;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
		spc--;
	}
	int temp = 4;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(k=temp;k>=1;k--)
		{
			cout<<"* ";
		}
		cout<<"\n";
		temp--;
	}
	return 0;
}
