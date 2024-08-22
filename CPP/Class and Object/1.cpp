#include<iostream>
using namespace std;
class Demo
{
	private :
		int x = 10; 
		int y = 20;
	public :
		int a = 30;
		int b = 40;
};
int main()
{
	Demo d1;
//	cout<<"\nValue of x = "<<d1.x;
//	cout<<"\nValue of y = "<<d1.y;
	
	cout<<"\nValue of a = "<<d1.a;
	cout<<"\nValue of b = "<<d1.b;
	return 0;
}
