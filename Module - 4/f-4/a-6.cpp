#include<iostream>
using namespace std;
class num
{
	private :
	int pri = 9;
	
	protected :
	int pro = 8;
	
	public :
	int pub = 7;
	
	int getPvt()
	{
		return pri;
	}
};
class dou : protected num
{
	public:
	int getPro()
	{
		return pro;
	}
	int getPub()
	{
		return pub;
	}
};
main()
{
	dou d;
	cout<<"private: can't call private data..";
	cout<<"\nprotected:"<<d.getPro();
	cout<<"\nPublic:"<<d.getPub();
	
}

