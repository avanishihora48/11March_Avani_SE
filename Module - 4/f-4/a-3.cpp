#include<iostream>
using namespace std;
class person
{
	public:
		int age;
	    string nm;
	    
	void getdata()
	{
		cout<<"Enter name of student:";
	    cin>>nm;
	    cout<<"Enter age of student:";
	    cin>>age;
	}
};
class student 
{
	public:
    int pr,s1,s2,s3;
    void percent()
    {
    	cout<<"Enter subject 1 marks:";
    	cin>>s1;
    	cout<<"Enter subject 2 marks:";
    	cin>>s2;
    	cout<<"Enter subject 3 marks:";
    	cin>>s3;
	    pr = (s1+s2+s3)/3;
	    
    }  
};

class teacher 
{
	public:
	int sala;
	void sal()
	{
		cout<<"Enter salary of teacher:";
		cin>>sala;
	}
};

class print : public person, public  student, public teacher
{
	public:
	void printdata()
	{
		cout<<"\nName of student:"<<nm;
		cout<<"\nAge of student :"<<age;
		cout<<"\nPercentage of student is: "<<pr<<"%";
		cout<<"\nSalary of teacher is:"<<sala<<"rs.";
	}
};
main()
{
	print p;
	p.getdata();
	p.percent();
	p.sal();
	p.printdata();
}

