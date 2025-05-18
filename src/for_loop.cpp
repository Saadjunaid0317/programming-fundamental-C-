#include<iostream>

using namespace std;

int main()
{
	int range;
	int table_no;
	cout << " Enter range of table " << endl;
	cin >> range;
	cout << " Enter table number " << endl;
	cin >> table_no;
	for (int a = 0; a < range; a++)
	{
		cout << table_no << " * " << a << " = " << a * table_no << endl;

	}
	return 0;

}