#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo()//default constructor
		{
			cout<<"\nObject created";	
		}	
		~Demo()//destructor
		{
			cout<<"\nObject destroyed";
		}
};
int main()
{
	int x = 1;
	cout<<"\nProgram execution started";
	if(x==1)
	{
		Demo d1;
	}
	cout<<"\nProgram execustion ended";
	return 0;
}
