#include<iostream>
using namespace std;

int main() 
{
	A:
	int percentage;
	int age;
	cout<<" --Eligibility Check-- " << endl;
	cout<<"Enter your percentage: "<< endl;
	cin >> percentage;
	
	if(percentage>=70) 
	{
		cout << "Enter your Age: " << endl;
		cin >> age;
		if (age<=50) 
		{
			cout << " Eligible " << endl;
		}
		else 
		{
			cout << "Not Eligible " << endl;
		}
	}
	else 
	{
		cout << "Not Eligible " << endl;
	}
	goto A;
	return 0;
}