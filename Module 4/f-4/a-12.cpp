#include<iostream>
using namespace std;
class avani
{
	public:
	int a,b;
	void before()
	{
		cout<<"Enter First number: ";
		cin>>a;
		cout<<"Enter Second number: ";
		cin>>b;
	}
	
	void after()
	{
		cout<<"The number before swap is a="<<a<<" b="<<b;
		a = a*b;
		b = a/b;
		a = a/b;
		cout<<"\nThe number after swap is a="<<a<<" b="<<b;
	}
};
main()
{
	avani a;
	a.before();
	a.after();
}
