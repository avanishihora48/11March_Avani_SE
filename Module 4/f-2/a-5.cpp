#include<iostream>
using namespace std;
class Rectangle
{
	double length,width;
	
	public:
	Rectangle(double l,double w)
	{
		length = l;
		width = w;
	}
	double area()
	{
		return length*width;
	}
	double perimeter()
	{
		return 2 * (length + width);
	}
};

main()
{
	double length,width;
	cout<<"Enter length of rectangle:";
	cin>>length;
	cout<<"Enter width of rectangle:";
	cin>>width;
	
	Rectangle rectangle(length,width);
	
	cout<<"Area of rectangle:"<<rectangle.area();
	cout<<"\nprimeter of rectangle:"<<rectangle.perimeter();
	
}


