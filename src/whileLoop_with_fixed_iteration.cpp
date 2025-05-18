#include<iostream>
using namespace std;
int main()
{
	int num;
	int count=1;
	cout << "Attempt: " << count;
	cout << " Guess the number...... " << endl;
	cin >> num;
	while (count<=3)
	{
		count++;
		if (num == 100)
		{
			cout << " Got it....you won " << endl;
			break;
		}
		else
		{
			cout << "Attempt: " << count;
			cout << " Try again..... " << endl;
			cout << "Guess the number Again" << endl;
			cin >> num;
		}
	}
	return 0;
}