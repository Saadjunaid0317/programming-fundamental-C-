#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << " Guess the number .... " << endl;
	cin >> num;
	while (num != 100)
	{
		cout << " Try again..... " << endl;
		cout << "Guess the number ..." << endl;
		cin >> num;
	}
	cout << " Got it.... " << endl;
	return 0;
}