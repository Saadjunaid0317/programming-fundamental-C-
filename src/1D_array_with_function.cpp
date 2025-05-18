#include <iostream>
using namespace std;

void scholarship_check(char input_grd[5]) 
{
	for (int i=0; i<=4; i++) 
	{
		if (input_grd[i]=='A' || input_grd[i] == 'B')
		{
			cout<<"Index " <<i<<"Eligible for ScholarShip" << endl;
		}
		else 
		{
			cout << "Index " << i << "Not Eligible for ScholarShip" << endl;
		}

	}

}

int main() {
	char grd[5] = {'A','C','D','E','B'};
	scholarship_check(grd);
	return 0;
}