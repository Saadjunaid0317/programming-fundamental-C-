#include <iostream>
#include<string.h>
using namespace std;

void Areacal(int r,double pi=3.14)
{
	float area = 0;
	area = pi * r * r;
	cout<<"Area of Circle :  " <<area<< endl;
}

int main() 
{
	Areacal(5); //call function with default argument
	Areacal(5,3.14159);
	return 0;
}