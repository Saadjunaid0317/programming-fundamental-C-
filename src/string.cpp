
#include<string>
#include<iostream>
using namespace std;

int main()
{
	string Firstname;
	string Lastname;
	string Fullname;
	cout<<" Enter your First name:"<<endl;
	cin>>Firstname;
	cout<<" Enter your Last name:"<<endl;
	cin>>Lastname;
	Fullname=Firstname+" "+Lastname;
	cout<<Fullname<<endl;
	cout<<"Fullname.size()"<<Fullname.size()<<endl;
	
return 0;
}
