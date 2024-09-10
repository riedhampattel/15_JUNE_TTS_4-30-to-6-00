#include<iostream>
using namespace std;
class Student
{
	public :
		int roll;
		string name;
		int marks1;
		int marks2;
		int total;
		Student(int roll,string name,int marks1,int marks2)
		{
			this->roll = roll;
			this->name = name;
			this->marks1 = marks1;
			this->marks2 = marks2;
		}		
		void grade()
		{
			if(marks1+marks2>=70)
			{
				cout<<"\nB";
			}
			else
			{
				cout<<"\nC";
			}
		}
};
//class Address
//{
//	string address;
//	Student *ref;
//	public :
//		Address(string address,Student *ref)
//		{
//			this->address = address;
//		}
//		void display()
//		{
//			cout<<"\nName = "<<ref.name<<" -> ";
//			cout<<"Address = "<<address;
//		}
//};
int main()
{
	Student s(101,"Rahul",75,84);
//	Address a("Ambawadi,Ahmedabad",&obj);
	s.grade();
	return 0;
}
