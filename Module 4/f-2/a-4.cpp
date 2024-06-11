#include<iostream>
using namespace std;
float pi=3.14;
class Circle
{
	double radius;
	
	public:
	Circle(double r)
	{
		radius = r;
	}
	double area()
	{
		return pi*radius*radius;
	}
	double cir()
	{
		return 2*pi*radius;
	}
};

main()
{
	double radius;
	cout<<"Enter radius of circle:";
	cin>>radius;
	
	Circle circle(radius);
	
	cout<<"Area of circle:"<<circle.area();
	cout<<"\nCircumference of circle:"<<circle.cir();
	
	
}


