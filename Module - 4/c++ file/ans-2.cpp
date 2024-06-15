#include<iostream>
#include<fstream>
using namespace std;
main()
{
	
	ofstream fl("ans-2.txt",ios::app);
	int id,n,i;
	string nm,city;
	
	cout<<"Enter total number of students:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n\nEnter your ID: ";
	    cin>>id;
	    cout<<"Enter your name: ";
	    cin>>nm;
	    cout<<"Enter your city:";
	    cin>>city;
	    
	    cout<<"\n\nID:"<<id;
		cout<<"\nName:"<<nm;
		cout<<"\nCity:"<<city;
		
		fl<<"\nID:"<<id;
		fl<<"\nName:"<<nm;
		fl<<"\nCity:"<<city;
	}
	
	fl.close();
}

