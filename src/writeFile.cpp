#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{
    string Filecreating;
    cout << "Enter File name with Loctaion and format" << endl;
    cin >> Filecreating;
    ofstream myfile(Filecreating);
    string input;
    cout<<"Enter information" << endl;
    cin >> input;
    myfile << input;
    myfile.close();
    return 0;
}
