


#include <iostream>
#include<string.h>
using namespace std;

void mini(int a, int b)
{
	
	if (a > b)
	{
		cout << "Small :" << b << endl;//O/P
	}
	else
	{
		cout << "Small :" << a << endl;//O/P
	}
}

int main()
{
	int x = 0;
	int y = 0;
	cout << " Enter 1st Number : " << endl;
	cin >> x;
	cout << " Enter 2nd Number : " << endl;
	cin >> y;
	mini(x,y);
return 0;
}

