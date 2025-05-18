#include <iostream>
#include<string.h>
using namespace std;

int mini(int a, int b) 
{
	if (a>b) 
	{
		return b;
	}
	else 
	{
		return a;
	}
}

int main()
{
	int x=0;
	int y = 0;
	cout<<" Enter 1st Number : " << endl;
	cin >> x;
	cout << " Enter 2nd Number : " << endl;
	cin >> y;
	int minimum = mini(x, y);
	cout<<" Small value is : " <<minimum<<endl;
	return 0;
}

