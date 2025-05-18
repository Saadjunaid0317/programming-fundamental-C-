#include <iostream>
#include<string.h>
using namespace std;

void display(int arr[3][3])
{
	int temp=arr[0][0];
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			if (temp>arr[r][c]) 
			{
				temp = arr[r][c];
			}
		}
	}
	cout<<"Smallest Value :" <<temp<< endl;
}

int main()
{		
	int arr[3][3] =
	{ //c0 c1 c2
		23,43,67,//r0
		34,65,76,//r1
		12,15,15//r2
	};
	display(arr);
	
	
	return 0;
}