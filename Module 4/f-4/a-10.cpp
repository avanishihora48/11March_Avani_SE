#include<iostream>
using namespace std;
class AddString{
	public:
		string fnm,lnm;
		AddString(string fsnm,string lsnm){
			fnm = fsnm;
        	lnm = lsnm;
		}
		
		void operator*(){
			cout<<"\n First name and Last name is : "<<fnm << " "<<lnm;
		}
};
main(){
	string fsnm,lsnm;
	
	cout<<"Enter first name : ";
	cin>>fsnm;
	cout<<"Enter last name : ";
	cin>>lsnm;
	
	AddString add(fsnm, lsnm);
	*add;
}
