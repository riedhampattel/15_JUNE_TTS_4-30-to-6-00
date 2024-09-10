#include<iostream>
#include<fstream>
//ofstream ---> create or write
//ifstream ---> read
using namespace std;
int main()
{
	ofstream MyFile("first.txt");
	MyFile<<"Hello! This is my second file";
	MyFile.close();
	cout<<"\nOperation successful";
	return 0;
}
