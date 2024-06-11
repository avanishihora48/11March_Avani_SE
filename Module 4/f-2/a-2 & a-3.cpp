#include<iostream>
using namespace std;

class opening
{
	public:
		int num;
		string type;
		string nm;
		void getdata()
		{
			cout<<"Enter a/c holder name: ";
			cin>>nm;
			cout<<"Enter a/c holder number: ";
			cin>>num;
			cout<<"Enter a/c holder type: ";
			cin>>type;
		}
};
class deposite 
{
	public:
	int damount;
	void getamount()
	{
		cout<<"Enter amount: ";
		cin>>damount;
		if(damount>=2000)
		{
			cout<<"You can withdraw amount.";
		}
		else
		{
			cout<<"insuficinet balance";
			cout<<"\nDeposite amount more than 2000:";
			cin>>damount;
		}
	}
};
class withdraw : public deposite
{
	public:
	int wamount,total;
	
	void getwithdraw()
	{
		cout<<"\nEnter amount you want to withdraw: ";
	    cin>>wamount;
		if(damount>=wamount)
		{
			cout<<"\nwithdraw successful";
			total = damount - wamount;
	        cout<<"\nTotal:"<<total;
		}
		else
		{
			cout<<"Check your balance";
			cout<<"\nenter re-amount: ";
			cin>>wamount;
			total = damount - wamount;
	        cout<<"\nTotal:"<<total;
		}
	}
};
class info : public opening,public withdraw
{
	public:
	
	void printdata()
	{
		cout<<"\n\n------a/c holder data ----------\n";
		cout<<"\na/c holder name:"<<nm;
		cout<<"\na/c holder number:"<<num;
		cout<<"\na/c holder type:"<<type;
		cout<<"\nTotal:"<<total;
	}
};
main()
{
	info in;
	in.getdata();
	in.getamount();
	in.getwithdraw();
	in.printdata();
}
