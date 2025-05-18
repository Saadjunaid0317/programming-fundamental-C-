#include<iostream>
#include<stdio.h>


using namespace std;

int main(int) 
{
	cout<<" --Salary Bonus-- " << endl;
	int sl = 0;
	int bn = 0;
	cout<<" Enter Salary: " << endl;
	cin >> sl;
	if (sl>99999) //testing
	{
		bn = (sl / 100) * 5;
		sl = sl + bn;
		cout<<"Net Salary:" <<sl<<" Including Bonus "<< bn << endl;
	}
	else 
	{
		bn = (sl / 100) * 10;
		sl = sl + bn;
		cout << "Net Salary:" << sl << " Including Bonus " << bn << endl;
	}
	return 0;
}