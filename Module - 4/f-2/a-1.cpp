#include<iostream>
using namespace std;
class getdata
{
	public:
	float a,b;
	void data()
	{
		cout<<"Enter value of A:";
		cin>>a;
		cout<<"Enter value of B:";
		cin>>b;
	}
	void sum()
	{
		cout<<"Summation of A+B:"<<a+b;
	}
	
	void sub()
	{
		cout<<"\nSubstraction of A-B:"<<a-b;
	}
	
	void mul()
	{
		cout<<"\nMultiplication of A*B:"<<a*b;
	}
	
		void div()
	{
		cout<<"\nDivision of A/B:"<<a/b;
	}
};

main()
{
	getdata gt;
	gt.data();
	gt.sum();
	gt.sub();
	gt.mul();
	gt.div();
}
