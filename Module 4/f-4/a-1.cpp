#include<iostream>
using namespace std;
class averagerun 
{
	public:
	int tr,bp,ar;
	string nm;
	void run()
	{
		cout<<"Enter name of batsman :";
		cin>>nm;
		cout << "Enter total runs: ";
        cin >> tr;
        cout << "Enter best performance: ";
        cin >> bp;
	}
	
	void ave()
	{
		int numberOfInnings;
        cout << "Enter number of innings played: ";
        cin >> numberOfInnings;
        if (numberOfInnings != 0) 
		{
            ar = (float)(tr) / numberOfInnings;
        }
		 else 
		{
            ar = 0;
        }
	}
};
class printdata : public averagerun
{
	public:
	void displayData() 
	{
		cout<<"\nbatsman:"<<nm;
        cout <<"\nTotal Runs: " << tr;
        cout <<"\nAverage Runs: " << ar; 
        cout <<"\nBest Performance: " << bp;
    }
};		
main()
{
	printdata p;
	p.run();
	p.ave();
	p.displayData();
	
}
