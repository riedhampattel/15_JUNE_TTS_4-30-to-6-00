#include<iostream>
using namespace std;
class Demo
{
	private :
		int x;
		int y;
	public :
		void setdata(int num1,int num2)
		{
			x = num1;
			y = num2;
		}
		void getdata()
		{
			cout<<"\nValue of x = "<<x;
			cout<<"\nValue of y = "<<y;
		}
};
int main()
{
	Demo d1;
	int num1,num2;
	cout<<"\nEnter the value of num1 = ";
	cin>>num1;
	cout<<"\nEnter the value of num2 = ";
	cin>>num2;
	d1.setdata(num1,num2);
	d1.getdata();
	return 0;
}
