#include<string>
#include<iostream>

using namespace std;

int main()
{
	string sentence = "Book is good";
	cout<<sentence<<endl;
	sentence.replace(8,4,"the best");
	cout<<sentence<<endl;

return 0;
}
