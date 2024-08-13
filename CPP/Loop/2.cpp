#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int start,end,i,rem,copy,j,temp,digit,power;
	cout<<"\nEnter the value of start = ";
	cin>>start;
	cout<<"\nEnter the value of end = ";
	cin>>end;
	
	for(i=start;i<=end;i++)
	{
		int num = i;
		copy = i;
		temp = i;
		int sum = 0;
		digit = 0;
		while(num!=0)
		{
			num = num/10;
			digit++;
		}
		for(j=1;j<=digit;j++)
		{
			rem = copy%10;
			power = pow(rem,digit);
			sum = sum + power;
			copy = copy/10;
		}
		if(sum==temp)
		{
			cout<<temp<<" ";
		}
	}
	return 0;
}
