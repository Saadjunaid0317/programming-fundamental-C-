
#include<string>
#include<iostream>
using namespace std;

int main()
{
	char input;
	string sentence="Programming Fundamentals";
	cout<<sentence<<endl;
	cout<<" Enter Character to Find the Position "<<endl;
	cin>>input;
	int position;
	position=sentence.find(input);
	cout<<" The Character is Placed at : "<<position<<endl;
	return 0;
}