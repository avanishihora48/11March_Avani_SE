#include<iostream>
using namespace std;
class car
{
	string com,mod;
	int yr;
	public:
	car(int y,string c,string m)
	{
		yr = y;
		com = c;
		mod = m;
	}
	
	void printdata()
	{
		cout<<"\nCompany:"<<com;
		cout<<"\nModel:"<<mod;
		cout<<"\nYear:"<<yr;
	}
};
main()
{
	int x;
	string y,z;
	cout<<"Enter Car Company:";
	cin>>y;
	cout<<"Enter Car Model:";
	cin>>z;
	cout<<"Enter Car year:";
	cin>>x;
	
	car c(x,y,z);
	c.printdata();
}
