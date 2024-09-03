#include<iostream>
using namespace std;
class Demo
{
	private :
		int x;
	public :
		Demo(int x)
		{
			this->x = x;
		}
		friend void display(Demo &obj);
		
};
void display(Demo &obj)
{
	cout<<"\nValue of x = "<<obj.x;
}
int main()
{
	Demo d1(10);
	display(d1);
	return 0;
}
