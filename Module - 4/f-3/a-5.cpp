#include<iostream>
using namespace std;
class tra
{
	double s1,s2,s3;
	public:
	tra(double a,double b,double c)
	{
		s1 = a;
		s2 = b;
		s3 = c;
	}

	void sides()
	{
		if(s1==s2 && s2==s3)
		{
			cout<<"Traingle is equilateral.";
		}
		else if(s1==s2||s2==s3||s1==s3)
		{
			cout<<"Traingle is isosceles.";
		}
		else
		{
			cout<<"Traingle is scalene.";
		}
	}
};
main()
{ 
	double x,y,z;
	
	cout<<"Enter side 1:";
	cin>>x;
	cout<<"Enter side 2:";
	cin>>y;
	cout<<"Enter side 3:";
	cin>>z;
	
	tra t(x,y,z);
	t.sides();
}

