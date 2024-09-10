#include<iostream>
using namespace std;
//deep copy
class Demo
{
	public :
		double *cgpaptr;
		string name;
		Demo(string name,double cgpa)
		{
			this->name = name;
			cgpaptr = new double;
			*cgpaptr = cgpa;
		}
		Demo(Demo &obj)
		{
			name = obj.name;
			cgpaptr = new double;
			*cgpaptr = *obj.cgpaptr;
		}
		void display()
		{
			cout<<endl;
			cout<<"\nName = "<<name;
			cout<<"\ncgpa = "<<*cgpaptr;
		}
};
int main()
{
	Demo d1("Rahul",8.5);
	Demo d2(d1);
	
	cout<<"Before value change = ";
	d1.display();
	d2.display();
	
	*d2.cgpaptr = 7.2;
	
	cout<<"\nAfter value change = ";
	d1.display();
	d2.display();
	return 0;	
}

