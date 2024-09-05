#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo()
		{
			cout<<"\nObject created successfully";
		}
		~Demo()
		{
			cout<<"\nObject destroyed successfully";
		}
};
int main()
{
	Demo d1;
	cout<<"\nIf starts";
	if(1)
	{
		static Demo d2;
	}
	cout<<"\nIf ends";
	return 0;
}
