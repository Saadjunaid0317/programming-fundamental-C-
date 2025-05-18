#include <iostream>
#include<string.h>
using namespace std;

int smallestvalue(int numbers[5]) 
{
	int temp = numbers[0];
	for(int i=0; i<=4; i++)
	{
		if (temp>numbers[i]) 
		{
			temp = numbers[i];
		}
	}
	return temp;
}



int main()
{		
	int mynumbers[5];
	for (int a=0; a<5; a++) 
	{
		cout<<"Enter Value of Index" <<a<< endl;
		cin >> mynumbers[a];
	}
	cout<<"The Smallest Value is :" <<smallestvalue(mynumbers)<< endl;
	
	return 0;
}