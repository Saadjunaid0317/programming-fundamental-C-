#include<iostream>
using namespace std;

int main() 
{
A:
	double Richter;
	cout<<"== National Earthquake Information Center =="<< endl;
	cout<<" Please Enter the Richter Scale : " << endl;
	cin >> Richter;
	if (Richter>=0 && Richter<= 5.0) 
	{
		cout<<" Little or no damage " << endl;
	}
	else if (Richter >= 5.1 && Richter <= 6.5)
	{
		cout << " Serious damage: wall cracks  " << endl;
	}
	else if (Richter >= 6.6 && Richter <= 7.5)
	{
		cout << " Disaster: houses and building collapse  " << endl;
	}
	else if (Richter > 7.6)
	{
		cout << " Catastrophe, most building destroyed  " << endl;
	}
	
	goto A;
	return 0;
}