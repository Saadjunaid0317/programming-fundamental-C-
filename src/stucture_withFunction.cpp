
#include <iostream>
using namespace std;

union Student //Decl
{
    int id;
    double cgpa;
    char name[25];
};

void HighCGPA(Student s_check[5]) 
{
    cout<<"==Students with High CGPA==" <<endl<< endl;
    for (int i=0; i<5; i++) 
    {
        if (s_check[i].cgpa>=3.0)
        {
            cout<<"Name :" <<s_check[i].name<< endl;
            cout << "ID :" << s_check[i].id << endl;
        }
    }


}


int main() 
{
    Student s[5];
    
    for(int i=0; i<5; i++) 
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
    HighCGPA(s);
    
    return 0;
}