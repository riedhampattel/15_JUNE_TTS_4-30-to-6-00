#include<iostream>
using namespace std;
class Demo//abstract class
{
	public :
		virtual void draw() = 0;//pure virtual function
};
class Shape : public Demo
{
	public :
		void draw()
		{
			cout<<"We are drawing circle";
		}
};
int main()
{
	Shape s;
	s.draw();
	return 0;
}
