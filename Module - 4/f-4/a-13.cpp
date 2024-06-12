#include<iostream>
using namespace std;
 
class test 
{
	int x,y;
	
	public :
	void input()
	{
		cout<<"Enter number 1: ";
		cin>>x;
		cout<<"Enter number 2: ";
		cin>>y;
	}
	friend void find(test t);

};	
void find(test t){
		if (t.x>t.y)
	{
		cout<<"Largest is: "<<t.x;
	}
	else 
	{
		cout<<"Largest is: "<<t.y;
	}
}


main()
{
	test t;
	t.input();
	find(t);
}
