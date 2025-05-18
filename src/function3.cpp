#include <iostream>
#include<string.h>
using namespace std;

int mini()
{
	int a = 0;
	int b = 0;
	cout << " Enter 1st Number : " << endl;
	cin >> a;
	cout << " Enter 2nd Number : " << endl;
	cin >> b;
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int main(){
	cout<<"Small Value :  " <<mini()<< endl;
	return 0;
}

