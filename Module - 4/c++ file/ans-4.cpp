#include<iostream>
#include<fstream>
using namespace std;
main()
{
	
    ofstream fl("ans-4.txt",ios::app);
	string fnm,lnm;
	
	cout<<"Enter first name: ";
	cin>>fnm;
	
	cout<<"Enter last name:";
	cin>>lnm;
	
	cout<<"\nFirst name: "<<fnm;
	cout<<"\nlast name: "<<lnm;
	
	fl<<"\nFirst name: "<<fnm;
	fl<<"\nlast name: "<<lnm;
	
	fl.close();
}
