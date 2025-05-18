#include<iostream>
using namespace std;

int main() 
{
A:
	char grade;
	cout<<" == Percentage Predict based on Grade == " << endl;
	cout<<"Enter Grade :" << endl;
	cin >> grade;
	switch (grade) 
	{
	case 'A':
	case 'a':
		cout<<" > 70" << endl;
	break;
	case 'B':
	case 'b':
		cout << " > 60" << endl;
	break;
	case 'C':
	case 'c':
		cout << " > 50" << endl;
	break;
	default :
		cout<<"F Graded" << endl;
	}



	goto A;
	return 0;
}