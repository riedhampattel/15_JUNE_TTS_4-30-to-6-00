//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount
{
	private :
		double acntno;
		double balance;
	public :
		void deposit(double a,double b,double dep)	
		{
			acntno = a;
			balance = b;
			balance = balance + dep;
		}
		void withdrawl(double a,double b,double wid)	
		{
			acntno = a;
			balance = b;
			if(b>wid)
			{
				balance = balance - wid;
			}
			else
			{
				cout<<"\nYour account has not enough balance";
			}
		}
		void display()
		{
			cout<<"\nAccount number = "<<acntno;
			cout<<"\nAccount balance = "<<balance;
		}
};
int main()
{
	BankAccount b1;
	b1.deposit(123456,10000,2500);
	b1.display();
	b1.withdrawl(123456,10000,40000);
	b1.display();
	return 0;
}
