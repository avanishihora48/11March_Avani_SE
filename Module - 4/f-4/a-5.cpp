#include<iostream>
using namespace std;
class students 
{
	public:
	int roll;
	string nm;
	void std()
	{
		cout<<"Enter name of student: ";
		cin>>nm;
		cout<<"Enter roll no.of student: ";
		cin>>roll;
	}
};
class test : public students
{
	public:
	int s1,s2;
	void te()
	{
		cout<<"Enter subject 1 marks: ";
		cin>>s1;
		cout<<"Enter subject 2 marks: ";
		cin>>s2;
	}
};
class result :  public test
{
	public:
	int mks;
	void mk()
	{
		mks = s1 + s2;
		
	}
	void printdata()
	{
		cout<<"--------- Marksheet -----------";
		cout<<"\n\nName: "<<nm;
		cout<<"\nRoll no: "<<roll;
		cout<<"\nsubject 1 marks: "<<s1;
		cout<<"\nsubject 2 marks: "<<s2;
		cout<<"\nTotal marks obtain: "<<mks;
	}
};
main()
{
	result res;
	res.std();
	res.te();
	res.mk();
	res.printdata();
}
