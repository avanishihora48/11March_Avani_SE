#include<iostream>
using namespace std;
class getsum
{
	public:
	getsum(int a,int b)
	{
		cout<<"Summation of A+B:"<<a+b;
	}
};
class getsub
{
	public:
	getsub(int a,int b)
	{
		cout<<"\nSubstraction of A-B:"<<a-b;
	}
};
class getmul
{
	public:
	getmul(int a,int b)
	{
		cout<<"\nMultiplication of A*B:"<<a*b;
	}
};
class getdiv
{
	public:
	getdiv(float a,float b)
	{
		cout<<"\nDivision of A/B:"<<a/b;
	}
};
main()
{
	int a,b;
    cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	getsum gs(a,b);
	getsub s(a,b);
	getmul mu(a,b);
	getdiv d(a,b);
}

