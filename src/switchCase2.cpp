#include<iostream>
using namespace std;

int main() 
{
	A:
	char color;
	char choice;
	cout<<" == Contents of a Compressed Gas Cylinder == " << endl;
	cout<<" Enter Cylinder Color: " << endl;
	cin >> color;
	switch (color)
	{
	case 'Y':
	case 'y':
		cout<<" ammonia" << endl;
	break;

	case 'O':
	case 'o':
		cout << "carbon monoxide " << endl;
	break;

	case 'B':
	case 'b':
		cout << "hydrogen" << endl;
	break;

	case 'G':
	case 'g':
		cout << "oxygen" << endl;
		break;
	default:
		cout << "Contents unknown" << endl;
	}
	cout<<"Cont. ???? Y | N " << endl;
	cin >> choice;
	if (choice == 'Y' || choice == 'y') 
	{
		goto A;
	}
		return 0;	
}