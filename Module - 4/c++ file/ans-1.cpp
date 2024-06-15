#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream fl("ans-1.txt",ios::app);
	string nm;
	cout<<"Enter your name: ";
	cin>>nm;
	cout<<"Name:"<<nm;
	fl<<"\nName:"<<nm;
	fl.close();
}

