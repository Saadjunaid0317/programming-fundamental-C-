#include<iostream>
using namespace std;

int main() 
{
	A:
	int barcode;
	int amount;
	cout<<" ==Billing System== " << endl;
	cout<<" Enter barcode of the product : " << endl;
	cin >> barcode;
	switch (barcode)
	{
	case 123:
		cout<<" Category : Sea-Food " << endl;
		cout<<" Enter Bill Amount: " << endl;
		cin >> amount;
		if (amount>=1000 && amount<=2000)
		{
			amount = amount - (amount/100*5);
			cout<<" Discounted Bill :  "<<amount<< endl;
		}
		else
		{
			cout << " Billing Amount :  " << amount << endl;
		}
	break;
	case 456:
		cout << " Category : Fast-Food " << endl;
		cout << " Enter Bill Amount: " << endl;
		cin >> amount;
		if (amount >= 500 && amount <= 1000)
		{
			amount = amount - (amount / 100 * 10);
			cout << " Discounted Bill :  " << amount << endl;
		}
		else
		{
			cout << " Billing Amount :  " << amount << endl;
		}

		break;
	case 789:
		cout << " Category : Pet-Food " << endl;
		cout << " Enter Bill Amount: " << endl;
		cin >> amount;
		if (amount >= 100)
		{
			amount = amount - (amount / 100 * 25);
			cout << " Discounted Bill :  " << amount << endl;
		}
		else
		{
			cout << " Billing Amount :  " << amount << endl;
		}
		break;
	default:
		cout<<"Barcode not found..... " << endl;
	}
	goto A;
		return 0;	
}