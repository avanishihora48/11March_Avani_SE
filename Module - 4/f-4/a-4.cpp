#include<iostream>
using namespace std;
class person
{
	public:
		int roll;
	    string nm;
	    
	void getdata()
	{
		cout<<"Enter name of student:";
	    cin>>nm;
	    cout<<"Enter roll no. of student:";
	    cin>>roll;
	}
};
class student 
{
	public:
    int pr,s1,s2,s3,total;
    void percent()
    {
    	cout<<"Enter English marks:";
    	cin>>s1;
    	cout<<"Enter Maths marks:";
    	cin>>s2;
    	cout<<"Enter Science marks:";
    	cin>>s3;
    	total = s1+s2+s3;
	    pr = (s1+s2+s3)/3;
	   
    }  
    
};
class print : public person, public  student
{
	public:
	void printdata()
	{
		cout<<"\nName of student:"<<nm;
		cout<<"\nRoll no. of student :"<<roll;
		cout<<"\nEnglish:"<<s1;
		cout<<"\nMaths:"<<s2;
		cout<<"\nScience:"<<s3;
		cout<<"\n\n-----------------";
		cout<<"\nTotal:"<<total;
		cout<<"\nPercentage of student is: "<<pr<<"%";
		 if(pr>=90)
	    {
	    	cout<<"\nYou got A+";
		}
		else if (pr>=80)
		{
			cout<<"\nYou got A";
		}
		else if (pr>=75)
		{
			cout<<"You got B+";
		}
		else if (pr>=70)
		{
			cout<<"\nYou got B";
		}
		else if (pr>=30)
		{
			cout<<"\nYou got C";
		}
	    else 
	    {
	    	cout<<"\nYou are fail...";
		}
		
		
	}
};
main()
{
	print p;
	p.getdata();
	p.percent();
	p.printdata();
}
