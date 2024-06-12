#include<iostream>
using namespace std;
class data
{
	string nm,co;
	int age;
	public:
	data(int a,string m,string c)
	{
		age = a;
		nm = m;
		co = c;
	}
	
	void printdata()
	{
		cout<<"\nName:"<<nm;
		cout<<"\nAge:"<<age;
		cout<<"\nCountry:"<<co;
	}
};
main()
{
	int x;
	string y,z;
	cout<<"Enter name:";
	cin>>y;
	cout<<"Enter Age:";
	cin>>x;
	cout<<"Enter country:";
	cin>>z;
	
	data d(x,y,z);
	d.printdata();

}
