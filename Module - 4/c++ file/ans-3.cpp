#include<iostream>
#include<fstream>
using namespace std;
main()
{
	
	ofstream fl("ans-3.txt",ios::app);
	int n;
	
	cout<<"Enter value: ";
	cin>>n;
	
	if(n % 2 == 0)
	{
		cout<<"Even value";
		fl<<"\nValue is:"<<n;
		fl<<"\nNumber is Even";
	}
	else
	{
		cout<<"Odd value";
		fl<<"\nValue is:"<<n;
		fl<<"\nNumber is odd";
	}
	fl.close();
}
