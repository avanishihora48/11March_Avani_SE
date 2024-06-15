#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int n,i,s1,s2,s3,total;
	string nm;
	float per;
	
	ofstream fl("ans-6.txt",ios::app);
	
	cout<<"Enter number of students:";
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		cout<<"\n\nEnter Name of student: ";
		cin>>nm;
		
		cout<<"Enter subject-1 mark: ";
		cin>>s1;
		
		cout<<"Enter subject-2 mark: ";
		cin>>s2;
		
		cout<<"Enter subject-3 mark: ";
		cin>>s3;
		
		total = s1 + s2 + s3;
		per = total/3;
		 
		
		cout<<"\n\nName: "<<nm;
		cout<<"\nMark - 1: "<<s1;
		cout<<"\nMark - 2: "<<s2;
		cout<<"\nMark - 3: "<<s3;
		cout<<"\n------------------------";
		cout<<"\nTotal marks is:"<<total;
		cout<<"\nPercentage is: "<<per;
		if(per>=35)
		{
			cout<<"\npass..";
		}
		else
		{
			cout<<"\nfail..";
		}
		
		

		fl<<"\n\nName: "<<nm;
		fl<<"\nMark - 1: "<<s1;
		fl<<"\nMark - 2: "<<s2;
		fl<<"\nMark - 3: "<<s3;
		
		fl<<"\n------------------------";
		fl<<"\nTotal marks: "<<total;
		fl<<"\nPerctage id: "<<per;
		if(per>=35)
		{
			fl<<"\npass..";
		}
		else
		{
			fl<<"\nfail..";
		}
	}
	fl.close();
}
