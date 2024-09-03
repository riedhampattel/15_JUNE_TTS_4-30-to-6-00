#include<iostream>
using namespace std;
class Demo
{	
	private :
		int x = 10;
	public :
		friend void display(Demo &obj);
};
void display(Demo &obj)
{
	cout<<"\nValue of x = "<<obj.x;
}
int main()
{
	Demo d1;
	display(d1);
	return 0;
}
