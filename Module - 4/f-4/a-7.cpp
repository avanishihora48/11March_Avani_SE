#include<iostream>
using namespace std;
class avani
{
	public:
	avani()
	{
		cout<<"hello.....Avani here..";
	}
};
class dhwani : public avani
{
	public:
	dhwani()
	{
		cout<<"\nhello.....Dhwani here..";
	}
};
class shreya : public dhwani
{
	public:
	shreya()
	{
		cout<<"\nhello.....Shreya here..";
	}
};
main()
{
	shreya s;
	
}
