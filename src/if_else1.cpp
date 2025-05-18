#include<iostream>
#include<stdio.h>


using namespace std;

int main(int) 
{
	int age = 0;
	cout<<" License Eligibility: " << endl;
	cout<<"Enter Age :" << endl;
	cin >> age;
	if (age>17) 
	{
		cout<<" Eligible " << endl;
	}
	else 
	{
		cout<<" Not Eligible " << endl;
	}

	return 0;
}