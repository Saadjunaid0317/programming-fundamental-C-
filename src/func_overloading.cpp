#include <iostream>
#include<string.h>
using namespace std;

void Areacal(double pi, int r) //1
{
	float area = 0;
	area = pi * r * r;
	cout<<"Area of Circle :  " <<area<<"CM^2"<< endl;
}
void Areacal(int ln, int ht)//2
{
	int area = 0;
	area = ln*ht;
	cout << "Area of Rectangle :  " << area << endl;
}
void Areacal(int a, int b, int h)//3
{
	double area = 0;
	area = ((a+b)/2)*h;
	cout << "Area of Trapezoid :  " << area << endl;
}
int main() 
{
	Areacal(5, 10, 4);
	Areacal(9, 12);
	Areacal(3.14, 8);
	return 0;
}