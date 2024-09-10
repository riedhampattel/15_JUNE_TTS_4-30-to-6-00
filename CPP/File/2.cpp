#include<iostream>
#include<fstream>
//ofstream ---> create or write
//ifstream ---> read
using namespace std;
int main()
{
	string text;
	ifstream MyFile("TreasureHunt-2024.txt");
	while(getline(MyFile,text))
	{
		cout<<text;	
	}
	MyFile.close();
	return 0;
}
