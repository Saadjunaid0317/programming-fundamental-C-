#include <iostream>
#include<string.h>
using namespace std;

void mini()
{
	int a = 0;
	int b = 0;
	cout << " Enter 1st Number : " << endl;
	cin >> a;
	cout << " Enter 2nd Number : " << endl;
	cin >> b;
	if (a > b)
	{
		cout<<"Small :" <<b<<endl;//O/P
	}
	else
	{
		cout << "Small :" << a << endl;//O/P
	}
}

int main()
{
	mini();//Calling
	return 0;
}


