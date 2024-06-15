#include<iostream>
#include<fstream>
using namespace std;

main()
{
    ifstream f1 ("ans-5-1.txt",ios::app);
	ifstream f2 ("ans-5-2.txt",ios::app);
	int a,b;
	
	if(f1 == NULL || f2 == NULL)
	{
	    cout<<"Cannot read file..";
	}
	else
	{
		a = f1.get();
        b = f2.get();

		
		while (a!=EOF && b!=EOF)
		{
			a = f1.get();
		    b = f2.get();
		}
	}
	if(a==b)
	{
		cout<<"Files are equal!..";
	}
	else if(a!=b)
	{
		cout<<"\nFiles are not equal!..";
	}
	else
	{
		cout<<"\nSome crap occured!";
	}
	f1.close();
	f2.close();
}
