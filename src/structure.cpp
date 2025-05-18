#include <iostream>
using namespace std;

struct Student //Decl
{
    int id;
    double cgpa;
    char name[25];
};
int main() 
{
    Student s[3];
    for(int i=0; i<3; i++) 
    {
        cout<<"Student No." <<i+1<< endl;
        cout<<"-----------------------" << endl;
        cout<<"Enter Name: " << endl;
        cin >> s[i].name;
        cout<<"Enter id: " << endl;
        cin >> s[i].id;
        cout << "Enter cgpa: " << endl;
        cin >> s[i].cgpa;
    }
    for(int i=0; i<3; i++) 
    {
        cout << s[i].name << " " << s[i].id << " " << s[i].cgpa << " " << endl;
    }
    return 0;
}
