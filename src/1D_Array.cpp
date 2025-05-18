#include <iostream>
using namespace std;

int main() {
			     //0  1  2  3  4  5  6  7  8  9   
	int percentage[10] = {80,85,75,70,79,75,98,89,78,86};
	for (int i=0; i<=9; i++) 
	{
		if (percentage[i] >= 80) 
		{
			cout<<" Index  " <<i<<" Team A "<<endl;
		}
		else 
		{
			cout << " Index  " << i << " Team B" << endl;
		}
	}
	return 0;
}


