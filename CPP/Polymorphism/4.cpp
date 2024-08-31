#include<iostream>
using namespace std;
class Demo
{
	private :
		string name;
		int roll;
	public :
		Demo(string name,int roll)
		{
			this->name = name;
			this->roll = roll;
		}
		void display()
		{
			cout<<"\nName = "<<name;
			cout<<"\nRoll no. = "<<roll;
		}
};
int main()
{
	Demo d1("Rahul",101);
	d1.display();
	return 0;
}
