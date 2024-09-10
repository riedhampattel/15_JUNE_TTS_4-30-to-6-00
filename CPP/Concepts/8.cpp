#include<iostream>
using namespace std;
class Shape//abstract class or base class
{
	public :
		virtual void draw() = 0;//pure virtual function
};
class Circle : public Shape//derived class
{
	public :
		void draw()
		{
			cout<<"\nDrawing circle";
		}
};
class Square : public Shape//derived class
{
	public :
		void draw()
		{
			cout<<"\nDrawing square";
		}
};
int main()
{
	Shape *s;
	Circle c1;
	Square s1;
	s = &c1;
	s->draw();
	return 0;
}
