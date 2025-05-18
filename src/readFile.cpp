#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{
    string mytxt;
    ifstream filereading("D:\\ssuet.txt");
    
    while (getline(filereading, mytxt)) 
    {
        cout << mytxt;
    }
    filereading.close();

    return 0;
}