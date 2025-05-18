#include<iostream>

using namespace std;

int main()
{
	int amount = 0, sum = 0;
	do
	{
		cout << " Enter a Amount or 0 to end: " << endl;
		cin >> amount;
		sum += amount;
	} while (amount != 0);
	cout << " Total Amount  :" << sum << endl;
	return 0;

}
