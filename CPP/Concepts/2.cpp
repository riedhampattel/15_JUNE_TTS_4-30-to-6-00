#include<iostream>
using namespace std;
void display()
{
	static int x = 1;
	x++;
	cout<<"\nValue of x = "<<x;
}
int main()
{
	display();
	display();
	display();
	return 0;
}
